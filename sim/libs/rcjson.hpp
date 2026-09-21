
#pragma once
#include <variant>
#include <map>
#include <vector>
#include <string>
#include <cctype>
#include <cstdint>
#include <sstream>
#include <iomanip>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <optional>

namespace rcjson {

struct Json {
    // Forward declarations
    struct ObjectTag{};
    struct ArrayTag{};

    using Object = std::map<std::string, Json>;
    using Array  = std::vector<Json>;
    using Value  = std::variant<std::nullptr_t, bool, int64_t, double, std::string, Object, Array>;

    Value value;

    // --- Constructors ---
    Json() : value(nullptr) {}
    Json(std::nullptr_t) : value(nullptr) {}
    Json(bool b) : value(b) {}
    Json(int64_t i) : value(i) {}
    Json(int i) : value(static_cast<int64_t>(i)) {}
    Json(double d) : value(d) {}
    Json(const char* s) : value(std::string(s)) {}
    Json(const std::string& s) : value(s) {}
    Json(const Object& o) : value(o) {}
    Json(const Array& a) : value(a) {}

    static Json object() { return Json(Object{}); }
    static Json array()  { return Json(Array{}); }

    // --- Introspection helpers ---
    bool is_null()   const { return std::holds_alternative<std::nullptr_t>(value); }
    bool is_bool()   const { return std::holds_alternative<bool>(value); }
    bool is_int()    const { return std::holds_alternative<int64_t>(value); }
    bool is_double() const { return std::holds_alternative<double>(value); }
    bool is_string() const { return std::holds_alternative<std::string>(value); }
    bool is_object() const { return std::holds_alternative<Object>(value); }
    bool is_array()  const { return std::holds_alternative<Array>(value); }

    Object& as_object() { ensure_object(); return std::get<Object>(value); }
    Array&  as_array()  { ensure_array();  return std::get<Array>(value); }
    const Object& as_object() const { return std::get<Object>(value); }
    const Array&  as_array()  const { return std::get<Array>(value); }

    // --- Path handling ---
    // Path grammar:
    //   key segments separated by '.'
    //   arrays with [index], e.g., items[0]
    //   append with [], e.g., items[]
    //
    // Examples:
    //   set("righe[3].nome", "valore");
    //   set("nome[].nome1", "valore1");
    //   set("nome[].nome2", "Valore2");
    //
    // If containers along the path don't exist or have different type, they are (re)created.

    struct PathToken {
        enum class Kind { Key, Index, Append } kind;
        std::string key; // when Kind::Key
        std::optional<size_t> index; // when Kind::Index
        static PathToken Key(std::string k){ return PathToken{Kind::Key, std::move(k), std::nullopt}; }
        static PathToken Index(size_t i)   { return PathToken{Kind::Index, {}, i}; }
        static PathToken Append()          { return PathToken{Kind::Append, {}, std::nullopt}; }
    };

    // Set scalar or Json at path
    template <typename T>
    void set(const std::string& path, T&& v) {
        set_impl(parse_path(path), Json(std::forward<T>(v)));
    }
    void set(const std::string& path, const Json& v) {
        set_impl(parse_path(path), v);
    }
    void set(const std::string& path, Json&& v) {
        set_impl(parse_path(path), std::move(v));
    }

    // Append to array at path (creates it if missing)
    template <typename T>
    void append(const std::string& path_to_array, T&& v) {
        auto toks = parse_path(path_to_array);
        Json* node = ensure_container_for(toks); // must end at array
        if (!node->is_array()) node->value = Array{};
        node->as_array().emplace_back(Json(std::forward<T>(v)));
    }

    // Dump to string (pretty)
    std::string dump(int indent = 2) const {
        std::ostringstream oss;
        dump_impl(oss, *this, indent, 0);
        return oss.str();
    }

    // Save to file (create directories if needed)
    bool save(const std::string& filepath, int indent = 2) const {
        namespace fs = std::filesystem;
        try {
            fs::path p(filepath);
            if (p.has_parent_path()) {
                fs::create_directories(p.parent_path());
            }
            std::ofstream ofs(filepath, std::ios::binary);
            if (!ofs) return false;
            ofs << dump(indent);
            return true;
        } catch (...) {
            return false;
        }
    }

private:
    // ----- Ensure container types -----
    void ensure_object() {
        if (!is_object()) value = Object{};
    }
    void ensure_array() {
        if (!is_array()) value = Array{};
    }

    // ----- Path parser -----
    static std::vector<PathToken> parse_path(const std::string& p) {
        std::vector<PathToken> out;
        std::string key;
        size_t i = 0, n = p.size();


	auto push_key_if_any = \&{
	    if (!key.empty()) { out.push_back(PathToken::Key(key)); key.clear(); }
	};
        

        while (i < n) {
            char c = p[i];
            if (c == '.') {
                push_key_if_any();
                ++i;
            } else if (c == '[') {
                push_key_if_any();
                ++i; // skip '['
                if (i < n && p[i] == ']') {
                    // append
                    out.push_back(PathToken::Append());
                    ++i; // skip ']'
                } else {
                    // parse number until ']'
                    size_t start = i;
                    while (i < n && std::isdigit(static_cast<unsigned char>(p[i]))) ++i;
                    if (i >= n || p[i] != ']') {
                        throw std::runtime_error("Path parse error: missing ']'");
                    }
                    if (i == start) throw std::runtime_error("Path parse error: empty index");
                    size_t idx = static_cast<size_t>(std::stoull(p.substr(start, i - start)));
                    out.push_back(PathToken::Index(idx));
                    ++i; // skip ']'
                }
            } else {
                key.push_back(c);
                ++i;
            }
        }
        push_key_if_any();
        return out;
    }

    // Ensure path up to parent of final token; returns pointer to that node (or final container for append/index when needed)
    Json* ensure_container_for(const std::vector<PathToken>& toks) {
        Json* cur = this;
        for (size_t t = 0; t < toks.size(); ++t) {
            const bool is_last = (t + 1 == toks.size());
            const auto& tok = toks[t];

            if (tok.kind == PathToken::Kind::Key) {
                // Need an object at cur
                cur->ensure_object();
                auto& obj = cur->as_object();
                auto it = obj.find(tok.key);
                if (it == obj.end()) {
                    // Decide what to create based on next token (lookahead)
                    if (!is_last) {
                        const auto& next = toks[t+1];
                        if (next.kind == PathToken::Kind::Key) {
                            it = obj.emplace(tok.key, Json::object()).first;
                        } else {
                            it = obj.emplace(tok.key, Json::array()).first;
                        }
                    } else {
                        it = obj.emplace(tok.key, Json()).first;
                    }
                }
                cur = &it->second;
            }
            else if (tok.kind == PathToken::Kind::Index) {
                // Need an array at cur
                cur->ensure_array();
                auto& arr = cur->as_array();
                if (arr.size() <= *tok.index) {
                    arr.resize(*tok.index + 1);
                }
                cur = &arr[*tok.index];
            }
            else { // Append
                // Need an array at cur
                cur->ensure_array();
                auto& arr = cur->as_array();
                if (!is_last) {
                    // Decide what to append based on next token
                    const auto& next = toks[t+1];
                    if (next.kind == PathToken::Kind::Key) {
                        arr.emplace_back(Json::object());
                    } else {
                        arr.emplace_back(Json::array());
                    }
                } else {
                    arr.emplace_back(Json());
                }
                cur = &arr.back();
            }
        }
        return cur;
    }

    // Set implementation using tokens
    void set_impl(const std::vector<PathToken>& toks, Json v) {
        if (toks.empty()) {
            *this = std::move(v);
            return;
        }
        if (toks.size() == 1) {
            const auto& tok = toks.front();
            if (tok.kind == PathToken::Kind::Key) {
                ensure_object();
                as_object()[tok.key] = std::move(v);
                return;
            } else if (tok.kind == PathToken::Kind::Index) {
                ensure_array();
                auto& arr = as_array();
                if (arr.size() <= *tok.index) arr.resize(*tok.index + 1);
                arr[*tok.index] = std::move(v);
                return;
            } else {
                ensure_array();
                as_array().emplace_back(std::move(v));
                return;
            }
        }
        // For deeper paths, ensure containers up to parent, then set
        // We can reuse ensure_container_for for all tokens except last
        std::vector<PathToken> parent(toks.begin(), toks.end() - 1);
        Json* parent_node = ensure_container_for(parent);
        const auto& last = toks.back();
        if (last.kind == PathToken::Kind::Key) {
            parent_node->ensure_object();
            parent_node->as_object()[last.key] = std::move(v);
        } else if (last.kind == PathToken::Kind::Index) {
            parent_node->ensure_array();
            auto& arr = parent_node->as_array();
            if (arr.size() <= *last.index) arr.resize(*last.index + 1);
            arr[*last.index] = std::move(v);
        } else { // Append
            parent_node->ensure_array();
            parent_node->as_array().emplace_back(std::move(v));
        }
    }

    // ----- Dump (pretty print) -----
    static void dump_impl(std::ostream& os, const Json& j, int indent, int depth) {
        if (j.is_null()) {
            os << "null";
        } else if (j.is_bool()) {
            os << (std::get<bool>(j.value) ? "true" : "false");
        } else if (j.is_int()) {
            os << std::get<int64_t>(j.value);
        } else if (j.is_double()) {
            // Print doubles with reasonable formatting
            os << std::setprecision(15) << std::get<double>(j.value);
        } else if (j.is_string()) {
            os << '"' << escape(std::get<std::string>(j.value)) << '"';
        } else if (j.is_object()) {
            const auto& obj = std::get<Object>(j.value);
            os << "{";
            if (!obj.empty()) {
                bool first = true;
                for (const auto& [k, v] : obj) {
                    if (!first) os << ",";
                    if (indent > 0) os << "\n" << std::string((depth+1)*indent, ' ');
                    os << '"' << escape(k) << "\": ";
                    dump_impl(os, v, indent, depth + 1);
                    first = false;
                }
                if (indent > 0) os << "\n" << std::string(depth*indent, ' ');
            }
            os << "}";
        } else if (j.is_array()) {
            const auto& arr = std::get<Array>(j.value);
            os << "[";
            if (!arr.empty()) {
                for (size_t i = 0; i < arr.size(); ++i) {
                    if (i != 0) os << ",";
                    if (indent > 0) os << "\n" << std::string((depth+1)*indent, ' ');
                    dump_impl(os, arr[i], indent, depth + 1);
                }
                if (indent > 0) os << "\n" << std::string(depth*indent, ' ');
            }
            os << "]";
        }
    }

    static std::string escape(const std::string& s) {
        std::ostringstream oss;
        for (unsigned char c : s) {
            switch (c) {
                case '\"': oss << "\\\""; break;
                case '\\': oss << "\\\\"; break;
                case '\b': oss << "\\b"; break;
                case '\f': oss << "\\f"; break;
                case '\n': oss << "\\n"; break;
                case '\r': oss << "\\r"; break;
                case '\t': oss << "\\t"; break;
                default:
                    if (c < 0x20) {
                        oss << "\\u" << std::hex << std::uppercase << std::setw(4) << std::setfill('0') << int(c);
                        oss << std::dec << std::nouppercase;
                    } else {
                        oss << c;
                    }
            }
        }
        return oss.str();
    }
};

} // namespace rcjson

