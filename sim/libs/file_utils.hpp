
// EventSink.hpp
#pragma once
#include <string>
#include <vector>
#include <map>
#include <sstream>
#include <fstream>
#include <filesystem>
#include <system_error>
#include <chrono>
#include <random>
#include <iostream>
#include <iomanip>
#include <cstdlib>   // std::system
#include <cctype>

#if defined(__unix__) || defined(__APPLE__)
#include <unistd.h>  // getpid
#endif

namespace eventio {

namespace fs = std::filesystem;

enum class OutputFormat {
    Lines,      // StringQueue: una riga per stringa
    CSV,        // StringQueue: una riga CSV (colonna unica)
    JSON,       // StringQueue/VariableBag/StructuredQueue: JSON
    JSONLines,  // StructuredQueue: una riga JSON per evento
    INI         // VariableBag: formato key=value (semplice)
};

struct WriteOptions {
    OutputFormat format = OutputFormat::Lines;
    char csv_delim = ',';               // usato solo se format == CSV
    bool ensure_trailing_newline = true;
    // quando si scrive "combinato": meta+events in un file solo
    bool pretty_json = false;           // aggiunge spaziature/minima formattazione
};

/// --- StringQueue: come prima, lista di stringhe ---
class StringQueue {
public:
    void reserve(std::size_t n) { data_.reserve(n); }
    void add(const std::string& s) { data_.push_back(s); }
    void add(std::string&& s) { data_.push_back(std::move(s)); }

    template <typename... Ts>
    void add_concat(const Ts&... parts) {
        std::ostringstream oss;
        appendToStream(oss, parts...);
        data_.push_back(oss.str());
    }

    std::size_t size() const noexcept { return data_.size(); }
    bool empty() const noexcept { return data_.empty(); }

    const std::vector<std::string>& data() const noexcept { return data_; }
    std::vector<std::string>& data() noexcept { return data_; }

    void clear() { data_.clear(); }

private:
    std::vector<std::string> data_;

    static void appendToStream(std::ostringstream&) {}
    template <typename T, typename... Ts>
    static void appendToStream(std::ostringstream& oss, const T& first, const Ts&... rest) {
        oss << first;
        appendToStream(oss, rest...);
    }
};

namespace detail {

// Escape per JSON string
inline std::string json_escape(const std::string& s) {
    std::string out;
    out.reserve(s.size() + 8);
    for (unsigned char c : s) {
        switch (c) {
            case '\"': out += "\\\""; break;
            case '\\': out += "\\\\"; break;
            case '\b': out += "\\b";  break;
            case '\f': out += "\\f";  break;
            case '\n': out += "\\n";  break;
            case '\r': out += "\\r";  break;
            case '\t': out += "\\t";  break;
            default:
                if (c < 0x20) {
                    std::ostringstream oss;
                    oss << "\\u" << std::dec << std::setw(4) << std::setfill('0') << (int)c;
                    out += oss.str();
                } else {
                    out += static_cast<char>(c);
                }
        }
    }
    return out;
}

// CSV quoting (colonna unica)
inline std::string csv_quote_cell(const std::string& s, char delim) {
    bool need_quotes = false;
    for (char c : s) {
        if (c == '\"' || c == '\n' || c == '\r' || c == delim) {
            need_quotes = true;
            break;
        }
    }
    if (!need_quotes) return s;

    std::string out;
    out.reserve(s.size() + 4);
    out.push_back('\"');
    for (char c : s) {
        if (c == '\"') out += "\"\"";
        else out.push_back(c);
    }
    out.push_back('\"');
    return out;
}

// Genera nome file praticamente univoco
inline std::string make_unique_basename(const std::string& prefix, const std::string& ext = ".txt") {
    auto now = std::chrono::high_resolution_clock::now().time_since_epoch().count();
    unsigned long pid_like = 0;
#if defined(__unix__) || defined(__APPLE__)
    pid_like = static_cast<unsigned long>(::getpid());
#endif
    std::random_device rd;
    std::mt19937_64 rng(rd() ^ static_cast<unsigned long long>(now));
    auto r = rng();

    std::ostringstream oss;
    oss << prefix << now << "_" << pid_like << "_" << std::dec << r << ext;
    return oss.str();
}

// Quoting stile shell (doppi apici + escape)
inline std::string quote_shell_arg(const std::string& s) {
    std::string out;
    out.reserve(s.size() + 2);
    out.push_back('\"');
    for (char c : s) {
        if (c == '\"') out += "\\\"";
        else out.push_back(c);
    }
    out.push_back('\"');
    return out;
}

// Crea cartella (ricorsivo)
inline void ensure_directory(const fs::path& dir) {
    std::error_code ec;
    if (fs::exists(dir, ec)) {
        if (!fs::is_directory(dir, ec)) {
            throw std::runtime_error("Esiste un file con lo stesso nome della directory: " + dir.string());
        }
        return;
    }
    if (!fs::create_directories(dir, ec)) {
        throw std::runtime_error("Impossibile creare la directory: " + dir.string() + " (" + ec.message() + ")");
    }
}

} // namespace detail

/// --- VariableBag: variabili globali/metadata ---
class VariableBag {
public:
    void set(const std::string& key, const std::string& val) { s_[key] = val; }
    void set(const std::string& key, const char* val) { s_[key] = std::string(val); }
    void set(const std::string& key, int64_t val) { i_[key] = val; }
    void set(const std::string& key, uint64_t val) { u_[key] = val; }
    void set(const std::string& key, double val) { d_[key] = val; }
    void set(const std::string& key, bool val) { b_[key] = val; }

    bool empty() const {
        return s_.empty() && i_.empty() && u_.empty() && d_.empty() && b_.empty();
    }

    // Serializza su stream in JSON o INI
    void write(std::ostream& out, OutputFormat fmt = OutputFormat::JSON, bool pretty = false) const {
        switch (fmt) {
            case OutputFormat::JSON: write_json(out, pretty); break;
            case OutputFormat::INI:  write_ini(out); break;
            default:
                throw std::runtime_error("VariableBag supporta solo JSON o INI");
        }
    }

    // Utility: serializzazione in stringa JSON (comodo per comporre file combinati)
    std::string to_json(bool pretty = false) const {
        std::ostringstream oss;
        write_json(oss, pretty);
        return oss.str();
    }

private:
    std::map<std::string, std::string> s_;
    std::map<std::string, int64_t>     i_;
    std::map<std::string, uint64_t>    u_;
    std::map<std::string, double>      d_;
    std::map<std::string, bool>        b_;

    void write_json(std::ostream& out, bool pretty) const {
        // Costruiamo manualmente un oggetto JSON piatto: { "k": v, ... }
        out << "{";
        bool first = true;

        auto sep = [&](void) {
            if (!first) out << ",";
            if (pretty) out << " ";
            first = false;
        };

        for (const auto& kv : s_) {
            sep();
            out << '\"' << detail::json_escape(kv.first) << "\": "
                << '\"' << detail::json_escape(kv.second) << '\"';
        }
        for (const auto& kv : i_) {
            sep();
            out << '\"' << detail::json_escape(kv.first) << "\": " << kv.second;
        }
        for (const auto& kv : u_) {
            sep();
            out << '\"' << detail::json_escape(kv.first) << "\": " << kv.second;
        }
        for (const auto& kv : d_) {
            sep();
            // Usa formato standard; se vuoi controllo su precisione, aggiungi std::setprecision
            out << '\"' << detail::json_escape(kv.first) << "\": " << kv.second;
        }
        for (const auto& kv : b_) {
            sep();
            out << '\"' << detail::json_escape(kv.first) << "\": " << (kv.second ? "true" : "false");
        }
        out << "}";
    }

    void write_ini(std::ostream& out) const {
        // key=value ; per tipo numerico/bool stampiamo in chiaro
        for (const auto& kv : s_) out << kv.first << "=" << kv.second << "\n";
        for (const auto& kv : i_) out << kv.first << "=" << kv.second << "\n";
        for (const auto& kv : u_) out << kv.first << "=" << kv.second << "\n";
        for (const auto& kv : d_) out << kv.first << "=" << kv.second << "\n";
        for (const auto& kv : b_) out << kv.first << "=" << (kv.second ? "true" : "false") << "\n";
    }
};

/// --- StructuredQueue: eventi come map<string,string> (o campi tipizzati) ---
class StructuredQueue {
public:
    using Record = std::map<std::string, std::string>;

    // Aggiunta rapida: {{"key","val"}, {"k2","v2"}, ...}
    void addEvent(std::initializer_list<std::pair<const std::string, std::string>> fields) {
        records_.emplace_back(Record{fields});
    }

    // Aggiunta da mappa già pronta
    void addEvent(const Record& r) { records_.push_back(r); }
    void addEvent(Record&& r) { records_.push_back(std::move(r)); }

    // Helper per conversioni base (overload) su record corrente creato ad hoc
    template <typename T>
    static std::string to_string_generic(const T& v) {
        std::ostringstream oss;
        oss << v;
        return oss.str();
    }

    void addEventKV(const std::string& k, const std::string& v) {
        Record r; r[k]=v; records_.push_back(std::move(r));
    }
    void addEventKV(const std::string& k, int64_t v) {
        addEvent({{k, to_string_generic(v)}});
    }
    void addEventKV(const std::string& k, uint64_t v) {
        addEvent({{k, to_string_generic(v)}});
    }
    void addEventKV(const std::string& k, double v) {
        addEvent({{k, to_string_generic(v)}});
    }
    void addEventKV(const std::string& k, bool v) {
        addEvent({{k, v ? "true" : "false"}});
    }

    std::size_t size() const noexcept { return records_.size(); }
    bool empty() const noexcept { return records_.empty(); }

    const std::vector<Record>& data() const noexcept { return records_; }

private:
    std::vector<Record> records_;
};

/// --- FileWriter: gestione cartella dump nella working directory ---
class FileWriter {
public:
    static void setBaseDumpDir(const fs::path& dir) { baseDumpDir_ = dir; }
    static fs::path baseDumpDir() {
        if (baseDumpDir_.empty()) return fs::current_path() / "dumps";
        return baseDumpDir_;
    }

    // StringQueue: scrive come Lines/CSV/JSON
    static fs::path write(const StringQueue& q, const fs::path& path, const WriteOptions& opt = {}) {
        ensure_parent(path);
        std::ofstream out(path, std::ios::out | std::ios::trunc | std::ios::binary);
        if (!out) throw std::runtime_error("Impossibile aprire per scrittura: " + path.string());
        switch (opt.format) {
            case OutputFormat::Lines: write_lines(q, out, opt); break;
            case OutputFormat::CSV:   write_csv(q, out, opt);   break;
            case OutputFormat::JSON:  write_strings_json(q, out, opt.pretty_json); break;
            default: throw std::runtime_error("Formato non supportato per StringQueue");
        }
        out.flush();
        if (!out) throw std::runtime_error("Errore durante la scrittura su: " + path.string());
        return path;
    }

    // VariableBag: scrive JSON o INI
    static fs::path write(const VariableBag& vars, const fs::path& path, const WriteOptions& opt = {}) {
        ensure_parent(path);
        std::ofstream out(path, std::ios::out | std::ios::trunc | std::ios::binary);
        if (!out) throw std::runtime_error("Impossibile aprire per scrittura: " + path.string());
        if (opt.format == OutputFormat::JSON) vars.write(out, OutputFormat::JSON, opt.pretty_json);
        else if (opt.format == OutputFormat::INI) vars.write(out, OutputFormat::INI, false);
        else throw std::runtime_error("VariableBag supporta solo JSON o INI");
        out.flush();
        if (!out) throw std::runtime_error("Errore durante la scrittura su: " + path.string());
        return path;
    }

    // StructuredQueue: scrive JSON (array di oggetti) o JSONLines (riga per evento)
    static fs::path write(const StructuredQueue& sq, const fs::path& path, const WriteOptions& opt = {}) {
        ensure_parent(path);
        std::ofstream out(path, std::ios::out | std::ios::trunc | std::ios::binary);
        if (!out) throw std::runtime_error("Impossibile aprire per scrittura: " + path.string());
        if (opt.format == OutputFormat::JSON) write_struct_json(sq, out, opt.pretty_json);
        else if (opt.format == OutputFormat::JSONLines) write_struct_jsonlines(sq, out);
        else throw std::runtime_error("StructuredQueue supporta solo JSON o JSONLines");
        out.flush();
        if (!out) throw std::runtime_error("Errore durante la scrittura su: " + path.string());
        return path;
    }

    // File combinato: {"meta": {...}, "events": [...]}
    static fs::path writeCombined(const VariableBag& vars,
                                  const StructuredQueue& sq,
                                  const fs::path& path,
                                  const WriteOptions& opt = {}) {
        ensure_parent(path);
        std::ofstream out(path, std::ios::out | std::ios::trunc | std::ios::binary);
        if (!out) throw std::runtime_error("Impossibile aprire per scrittura: " + path.string());
        // JSON combinato
        out << "{";
        if (opt.pretty_json) out << "\n  ";
        out << "\"meta\": ";
        vars.write(out, OutputFormat::JSON, opt.pretty_json);
        out << ",";
        if (opt.pretty_json) out << "\n  ";
        out << "\"events\": ";
        write_struct_json(sq, out, opt.pretty_json);
        if (opt.pretty_json) out << "\n";
        out << "}";
        out.flush();
        if (!out) throw std::runtime_error("Errore durante la scrittura su: " + path.string());
        return path;
    }

    // Helpers: dump in cartella dedicata nella working directory
    template <typename T>
    static fs::path writeInDumpDir(const T& obj,
                                   const std::string& prefix,
                                   const std::string& extension,
                                   const WriteOptions& opt = {}) {
        fs::path dumpDir = baseDumpDir();
        detail::ensure_directory(dumpDir);
        fs::path target = dumpDir / detail::make_unique_basename(prefix, extension);
        return write(obj, target, opt);
    }

    template <typename T>
    static fs::path writeInDumpDirAs(const T& obj,
                                     const std::string& filename,
                                     const WriteOptions& opt = {}) {
        fs::path dumpDir = baseDumpDir();
        detail::ensure_directory(dumpDir);
        fs::path target = dumpDir / filename;
        return write(obj, target, opt);
    }

private:
    static fs::path baseDumpDir_;

    static void ensure_parent(const fs::path& p) {
        if (p.has_parent_path()) detail::ensure_directory(p.parent_path());
    }

    static void write_lines(const StringQueue& q, std::ostream& out, const WriteOptions& opt) {
        for (const auto& s : q.data()) out << s << '\n';
        (void)opt;
    }

    static void write_csv(const StringQueue& q, std::ostream& out, const WriteOptions& opt) {
        for (const auto& s : q.data()) out << detail::csv_quote_cell(s, opt.csv_delim) << '\n';
        (void)opt;
    }

    static void write_strings_json(const StringQueue& q, std::ostream& out, bool pretty) {
        if (!pretty) {
            out << "[";
            const auto& v = q.data();
            for (std::size_t i = 0; i < v.size(); ++i) {
                if (i) out << ',';
                out << '\"' << detail::json_escape(v[i]) << '\"';
            }
            out << "]";
        } else {
            out << "[\n";
            const auto& v = q.data();
            for (std::size_t i = 0; i < v.size(); ++i) {
                out << "  " << '\"' << detail::json_escape(v[i]) << '\"';
                if (i + 1 < v.size()) out << ",";
                out << "\n";
            }
            out << "]";
        }
    }

    static void write_struct_json(const StructuredQueue& sq, std::ostream& out, bool pretty) {
        const auto& recs = sq.data();
        if (!pretty) {
            out << "[";
            for (std::size_t i = 0; i < recs.size(); ++i) {
                if (i) out << ",";
                write_one_object(recs[i], out, false, 0);
            }
            out << "]";
        } else {
            out << "[\n";
            for (std::size_t i = 0; i < recs.size(); ++i) {
                out << "  ";
                write_one_object(recs[i], out, true, 2);
                if (i + 1 < recs.size()) out << ",";
                out << "\n";
            }
            out << "]";
        }
    }

    static void write_struct_jsonlines(const StructuredQueue& sq, std::ostream& out) {
        for (const auto& r : sq.data()) {
            write_one_object(r, out, false, 0);
            out << "\n";
        }
    }

    static void write_one_object(const StructuredQueue::Record& r, std::ostream& out, bool pretty, int indent) {
        (void)indent;
        bool first = true;
        out << "{";
        for (const auto& kv : r) {
            if (!first) out << ",";
            if (pretty) out << " ";
            out << '\"' << detail::json_escape(kv.first) << "\": "
                << '\"' << detail::json_escape(kv.second) << '\"';
            first = false;
        }
        out << "}";
    }
};

// definizione dello static
inline fs::path FileWriter::baseDumpDir_;

/// Runner per script Python
class PythonRunner {
public:
    static int run(const std::string& pythonExe,
                   const fs::path& script,
                   const std::vector<std::string>& args = {},
                   bool quote_args = true) {
        std::ostringstream cmd;
        if (quote_args) {
            cmd << detail::quote_shell_arg(pythonExe) << " " << detail::quote_shell_arg(script.string());
            for (const auto& a : args) cmd << " " << detail::quote_shell_arg(a);
        } else {
            cmd << pythonExe << " " << script.string();
            for (const auto& a : args) cmd << " " << a;
        }
        return std::system(cmd.str().c_str());
    }
};

} // namespace eventio

