#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <stdexcept>
#include <cctype>

// Split robusto su separatori comuni: spazio, tab, virgola, punto e virgola
static std::vector<std::string> split_tokens(const std::string& line) {
    std::vector<std::string> out;
    std::string cur;
    for (char c : line) {
        if (c == ' ' || c == '\t' || c == ',' || c == ';') {
            if (!cur.empty()) { out.push_back(cur); cur.clear(); }
        } else {
            cur.push_back(c);
        }
    }
    if (!cur.empty()) out.push_back(cur);
    return out;
}

// Rimuove tutto dopo # o // (commenti)
static std::string strip_comment(const std::string& line) {
    size_t p1 = line.find('#');
    size_t p2 = line.find("//");
    size_t cut = std::min(
        p1 == std::string::npos ? line.size() : p1,
        p2 == std::string::npos ? line.size() : p2
    );
    return line.substr(0, cut);
}

std::vector<std::vector<std::string>> load_elf(const std::string& path) {
    std::ifstream ifs(path);
    if (!ifs) {
        throw std::runtime_error("Impossibile aprire file: " + path);
    }

    std::vector<std::vector<std::string>> rows;
    std::string line;
    size_t line_no = 0;

    while (std::getline(ifs, line)) {
        ++line_no;

        // togli commenti
        std::string body = strip_comment(line);

        // trim semplice
	auto ltrim = [](std::string& s) {
	    size_t i = 0;
	    while (i < s.size() && std::isspace((unsigned char)s[i])) ++i;
	    s.erase(0, i);
	};
	
	auto rtrim = [](std::string& s) {
	    if (s.empty()) return;
	    size_t i = s.size();
	    while (i > 0 && std::isspace((unsigned char)s[i - 1])) --i;
	    s.erase(i);
	};
        
        ltrim(body); rtrim(body);
        if (body.empty()) continue; // riga vuota/commento

        // tokenizza
        auto toks = split_tokens(body);
        if (!toks.empty()) rows.push_back(std::move(toks));
    }

    return rows; // rows[riga][indice] = stringa numero originale
}



#include <cstdint>
#include <string>
#include <vector>
#include <stdexcept>
#include <sstream>
#include <iomanip>
#include <algorithm>

// Rimuove prefissi "0x"/"0X" o "0b"/"0B" e ritorna la base dedotta
static int detect_base_and_trim(std::string& s) {
    if (s.size() > 2 && s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        s.erase(0, 2);
        return 16;
    }
    if (s.size() > 2 && s[0] == '0' && (s[1] == 'b' || s[1] == 'B')) {
        s.erase(0, 2);
        return 2;
    }
    // Se contiene solo [0-9A-Fa-f], potresti volerla trattare come hex.
    // Ma in genere si assume decimale se non c'è prefisso.
    return 10;
}

static uint64_t parse_token_to_u64(std::string tok, bool assume_hex_if_letters = true) {
    // Togli underscore o separatori se presenti nel tuo formato
    tok.erase(std::remove(tok.begin(), tok.end(), '_'), tok.end());

    int base = detect_base_and_trim(tok);

    // Se base=10 ma ci sono lettere A-F, lo trattiamo come hex (comodo per dump senza 0x)
    if (base == 10 && assume_hex_if_letters) {
        bool has_hex_letters = false;
        for (char c : tok) {
            if ((c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'f')) { has_hex_letters = true; break; }
        }
        if (has_hex_letters) base = 16;
    }

    if (tok.empty()) throw std::runtime_error("Token vuoto non parsabile");

    // Parsing
    uint64_t value = 0;
    try {
        size_t idx = 0;
        value = std::stoull(tok, &idx, base);
        if (idx != tok.size())
            throw std::runtime_error("Caratteri residui nel token: " + tok);
    } catch (const std::exception& e) {
        throw std::runtime_error(std::string("Impossibile convertire '") + tok + "' in base " + std::to_string(base) + ": " + e.what());
    }
    return value;
}

// Spezza un intero in parole da 16 bit.
// endian = true  -> little-endian (prima word = bits [15:0])
// endian = false -> big-endian   (prima word = più significativa)
static std::vector<uint16_t> split_u64_to_u16(uint64_t value, int total_bits, bool little_endian = true) {
    if (total_bits <= 0 || total_bits > 64) total_bits = 64; // default
    int words = (total_bits + 15) / 16;
    std::vector<uint16_t> out; out.reserve(words);

    if (little_endian) {
        for (int i = 0; i < words; ++i) {
            uint16_t w = static_cast<uint16_t>((value >> (16 * i)) & 0xFFFFu);
            out.push_back(w);
        }
    } else {
        // Big-endian (parola più significativa per prima)
        for (int i = words - 1; i >= 0; --i) {
            uint16_t w = static_cast<uint16_t>((value >> (16 * i)) & 0xFFFFu);
            out.push_back(w);
        }
    }
    return out;
}

// Format HEX a 4 cifre
static std::string u16_to_hex4(uint16_t x) {
    std::ostringstream oss;
    oss << std::hex << std::uppercase << std::setfill('0') << std::setw(4) << x;
    return oss.str();
}

// Format BIN a 16 caratteri
static std::string u16_to_bin16(uint16_t x) {
    std::string s(16, '0');
    for (int i = 15; i >= 0; --i) {
        s[15 - i] = ((x >> i) & 1u) ? '1' : '0';
    }
    return s;
}

uint64_t to_uint(const std::string& tok_in) {
    std::string tok = tok_in;

    // Rimuovi eventuali underscore
    tok.erase(std::remove(tok.begin(), tok.end(), '_'), tok.end());

    int base = 10;

    // Riconosce automaticamente 0x / 0b
    if (tok.rfind("0x", 0) == 0 || tok.rfind("0X", 0) == 0) {
        base = 16;
        tok.erase(0, 2);
    }
    else if (tok.rfind("0b", 0) == 0 || tok.rfind("0B", 0) == 0) {
        base = 2;
        tok.erase(0, 2);
    }
    else {
        // Se contiene lettere A-F, assumiamo hex
        for (char c : tok) {
            if (std::isalpha(c)) {
                base = 16;
                break;
            }
        }
    }

    if (tok.empty())
        throw std::runtime_error("Token vuoto in to_uint()");

    uint64_t val = 0;
    size_t idx = 0;

    try {
        val = std::stoull(tok, &idx, base);
    }
    catch (...) {
        throw std::runtime_error("Conversione fallita per '" + tok_in + "'");
    }

    if (idx != tok.size()) {
        throw std::runtime_error("Caratteri non numerici in '" + tok_in + "'");
    }

    return val;
}

#pragma once
#include <cctype>
#include <cstdint>
#include <stdexcept>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <limits>

// ---------------------------------------------
// CONFIG
// ---------------------------------------------
enum class Endian { Little, Big };

// ---------------------------------------------
// UTILITIES
// ---------------------------------------------
static inline std::string strip_underscores(const std::string& s) {
    std::string out; out.reserve(s.size());
    for (char c : s) if (c != '_') out.push_back(c);
    return out;
}

static inline bool is_hex_prefixed(const std::string& s) {
    return s.size() >= 2 && s[0] == '0' && (s[1] == 'x' || s[1] == 'X');
}

static inline bool is_all_hex_chars_or_underscores(const std::string& s) {
    if (s.empty()) return false;
    for (char c : s) {
        if (c == '_') continue;
        if (!std::isxdigit(static_cast<unsigned char>(c))) return false;
    }
    return true;
}

// ---------------------------------------------
// PARSER: SOLO ESADECIMALE → uint64_t
// ---------------------------------------------
static inline uint64_t parse_token_as_uint64_hex_only(const std::string& raw) {
    std::string s = strip_underscores(raw);
    if (s.empty())
        throw std::invalid_argument("Token esadecimale vuoto");

    if (is_hex_prefixed(s)) {
        if (s.size() == 2)
            throw std::invalid_argument("Prefisso 0x senza cifre: " + raw);
        return std::stoull(s, nullptr, 16);
    }

    if (!is_all_hex_chars_or_underscores(s))
        throw std::invalid_argument("Sono ammessi solo numeri esadecimali: " + raw);

    return std::stoull(s, nullptr, 16);
}

// ---------------------------------------------
// CALCOLO BYTES NECESSARI DA UN LITERALE HEX
//  - Interpreta il numero di cifre esadecimali e deduce i byte necessari.
//  - Esempi: "AB" -> 1B, "CDEF" -> 2B, "F" -> 1B (0x0F), "ABC" -> 2B (0x0ABC).
// ---------------------------------------------
static inline std::size_t compute_token_bytes_from_literal(const std::string& raw) {
    std::string s = strip_underscores(raw);
    if (s.empty())
        throw std::invalid_argument("Token esadecimale vuoto");

    if (is_hex_prefixed(s)) {
        if (s.size() == 2)
            throw std::invalid_argument("Prefisso 0x senza cifre: " + raw);
        s = s.substr(2);
    }

    if (!is_all_hex_chars_or_underscores(s))
        throw std::invalid_argument("Sono ammessi solo numeri esadecimali/underscore: " + raw);

    const std::size_t nibbles = s.size();
    // Arrotonda in eccesso ai byte (2 nibbles = 1 byte), minimo 1 byte
    return (nibbles + 1) / 2;
}

static inline std::size_t clamp_token_bytes(std::size_t want, std::size_t max_bytes = sizeof(uint64_t)) {
    if (want == 0 || want > max_bytes)
        throw std::invalid_argument("token_bytes non valido");
    return want;
}

// ---------------------------------------------
// CONVERSIONE TOKEN → BYTE (FISSA)
//  - Manteniamo anche la versione "fissa" originale, se serve altrove.
// ---------------------------------------------
static inline void append_value_as_bytes(uint64_t value,
                                         std::size_t token_bytes,
                                         Endian endian,
                                         std::vector<std::uint8_t>& out)
{
    if (token_bytes == 0 || token_bytes > sizeof(uint64_t))
        throw std::invalid_argument("token_bytes non valido");

    const uint64_t maxv =
        (token_bytes == 8) ? std::numeric_limits<uint64_t>::max()
                           : ((1ULL << (token_bytes * 8)) - 1ULL);

    if (value > maxv)
        throw std::overflow_error("Valore fuori range per token_bytes");

    if (endian == Endian::Little) {
        for (std::size_t i = 0; i < token_bytes; ++i)
            out.push_back((value >> (8 * i)) & 0xFF);
    } else {
        for (std::size_t i = 0; i < token_bytes; ++i) {
            std::size_t shift = 8 * (token_bytes - 1 - i);
            out.push_back((value >> shift) & 0xFF);
        }
    }
}

// ---------------------------------------------
// CONVERSIONE TOKEN → BYTE (AUTO o FISSA)
//  - Se token_bytes == 0 → AUTO (deduce la lunghezza dal literal).
//  - Se token_bytes > 0 → usa dimensione fissa (come sopra).
// ---------------------------------------------
static inline void append_value_as_bytes_auto(uint64_t value,
                                              std::size_t token_bytes,   // 0 = auto
                                              const std::string& raw_literal,
                                              Endian endian,
                                              std::vector<std::uint8_t>& out)
{
    std::size_t nbytes = token_bytes ? clamp_token_bytes(token_bytes)
                                     : compute_token_bytes_from_literal(raw_literal);

    const uint64_t maxv =
        (nbytes == 8) ? std::numeric_limits<uint64_t>::max()
                      : ((1ULL << (nbytes * 8)) - 1ULL);

    if (value > maxv)
        throw std::overflow_error("Valore fuori range per numero di byte richiesto");

    if (endian == Endian::Little) {
        for (std::size_t i = 0; i < nbytes; ++i)
            out.push_back((value >> (8 * i)) & 0xFF);
    } else {
        for (std::size_t i = 0; i < nbytes; ++i) {
            std::size_t shift = 8 * (nbytes - 1 - i);
            out.push_back((value >> shift) & 0xFF);
        }
    }
}

// ---------------------------------------------
// SCRITTURA MEMORIA A RIGHE FISSE (nessun padding extra)
//  - Concatena TUTTI i token in un flusso di byte.
//  - Wrappa l'output a 'bytes_per_line' byte per riga.
//  - Di default token_bytes = 0 (AUTO) → nessun zero-padding implicito.
// ---------------------------------------------
void write_memory_file(const std::vector<std::vector<std::string>>& rows,
                       const std::string& out_path,
                       std::size_t bytes_per_line,
                       std::size_t token_bytes = 0,             // <-- 0 = AUTO (default)
                       Endian endian = Endian::Little)
{
    if (bytes_per_line == 0)
        throw std::invalid_argument("bytes_per_line deve essere > 0");
    // token_bytes può essere 0 (auto) oppure >0 (fisso)

    // 1) Converti TUTTI i token in un unico flusso di byte, senza padding
    std::vector<std::uint8_t> mem;
    mem.reserve(rows.size() * 16);

    for (const auto& toks : rows) {
        for (const auto& tok : toks) {
            uint64_t v = parse_token_as_uint64_hex_only(tok);
            append_value_as_bytes_auto(v, token_bytes, tok, endian, mem);
        }
    }

    // 2) Scrivi il file con wrap fisso
    std::ofstream ofs(out_path);
    if (!ofs)
        throw std::runtime_error("Impossibile creare file memoria");

    auto hex2 = [](uint8_t b) {
        static const char* lut = "0123456789ABCDEF";
        std::string s(2, '0');
        s[0] = lut[(b >> 4) & 0xF];
        s[1] = lut[b & 0xF];
        return s;
    };

    for (size_t i = 0; i < mem.size(); i++) {
        if (i % bytes_per_line == 0 && i != 0)
            ofs << '\n';

        if (i % bytes_per_line == 0)
            ofs << hex2(mem[i]);
        else
            ofs << ' ' << hex2(mem[i]);
    }

    ofs << '\n';
}

// ---------------------------------------------
// LOAD MEMORIA DA FILE (lineare)
//  - Legge byte scritti come "AA" o "0xAA", separati da spazi.
// ---------------------------------------------
std::vector<std::uint8_t> load_memory_file_as_bytes(const std::string& path)
{
    std::ifstream ifs(path);
    if (!ifs)
        throw std::runtime_error("Impossibile aprire file memoria");

    std::vector<std::uint8_t> mem;
    std::string line;

    auto is_two_hex = [](const std::string& s) {
        if (s.size() != 2) return false;
        return std::isxdigit((unsigned char)s[0]) &&
               std::isxdigit((unsigned char)s[1]);
    };

    while (std::getline(ifs, line)) {
        std::istringstream iss(line);
        std::string tok;

        while (iss >> tok) {
            std::string s = strip_underscores(tok);
            uint64_t v = 0;

            if (is_hex_prefixed(s)) {
                if (s.size() != 4)
                    throw std::invalid_argument("Byte hex deve essere 0xAA: " + tok);
                v = std::stoull(s, nullptr, 16);
            } else {
                if (!is_two_hex(s))
                    throw std::invalid_argument("Byte hex deve essere AA: " + tok);
                v = std::stoull(s, nullptr, 16);
            }

            if (v > 0xFF)
                throw std::overflow_error("Byte fuori range");

            mem.push_back((uint8_t)v);
        }
    }

    return mem;
}

// ---------------------------------------------
// LETTURA A PC (bytes o valore intero)
// ---------------------------------------------
std::vector<std::uint8_t> read_bytes_at_pc(const std::string& mem_path,
                                           uint64_t pc,
                                           size_t size_bytes)
{
    auto mem = load_memory_file_as_bytes(mem_path);

    if (pc + size_bytes > mem.size())
        throw std::out_of_range("PC fuori dai limiti della memoria");

    return {
        mem.begin() + pc,
        mem.begin() + pc + size_bytes
    };
}

uint64_t read_value_at_pc(const std::string& mem_path,
                          uint64_t pc,
                          size_t size_bytes,
                          Endian endian = Endian::Little)
{
    if (size_bytes == 0 || size_bytes > sizeof(uint64_t))
        throw std::invalid_argument("size_bytes non valido");

    auto bytes = read_bytes_at_pc(mem_path, pc, size_bytes);

    uint64_t v = 0;

    if (endian == Endian::Little) {
        for (size_t i = 0; i < size_bytes; ++i)
            v |= (uint64_t)bytes[i] << (8 * i);
    } else {
        for (size_t i = 0; i < size_bytes; ++i)
            v = (v << 8) | bytes[i];
    }

    return v;
}
