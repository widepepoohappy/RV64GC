
#pragma once
#include <iostream>
#include <streambuf>
#include <string>

namespace ansi {
    inline constexpr const char* RESET   = "\033[0m";
    inline constexpr const char* BLUE    = "\033[34m";
    inline constexpr const char* YELLOW  = "\033[33m";
    inline constexpr const char* RED     = "\033[31m";
    inline constexpr const char* MAGENTA = "\033[35m";
}

class PrefixColorBuf : public std::streambuf {
public:
    PrefixColorBuf(std::streambuf* sb,
                   std::string prefix,
                   std::string tag,
                   const char* tag_color,
                   const char* msg_color)
        : _sb(sb)
        , _prefix(std::move(prefix))
        , _tag(std::move(tag))
        , _tag_color(tag_color)
        , _msg_color(msg_color)
        , _at_line_start(true) {}

    void set_prefix(std::string p)      { _prefix = std::move(p); }
    void set_tag(std::string t)         { _tag = std::move(t); }
    void set_tag_color(const char* c)   { _tag_color = c; }
    void set_msg_color(const char* c)   { _msg_color = c; }

protected:
    int overflow(int ch) override {
        using traits = std::char_traits<char>;
        if (traits::eq_int_type(ch, traits::eof()))
            return traits::not_eof(ch);

        if (_at_line_start) {
            write_str("["); write_str(_prefix); write_str("] ");

            write_str(_tag_color);
            write_str("["); write_str(_tag); write_str("] ");
            write_str(ansi::RESET);

            write_str(_msg_color);
            _at_line_start = false;
        }

        char c = traits::to_char_type(ch);
        if (c == '\n') {
            write_str(ansi::RESET);
            if (_sb->sputc('\n') == traits::eof()) return traits::eof();
            _at_line_start = true;
            return ch;
        } else {
            if (_sb->sputc(c) == traits::eof()) return traits::eof();
            return ch;
        }
    }

    int sync() override { return _sb->pubsync(); }

private:
    std::streambuf* _sb;
    std::string _prefix, _tag;
    const char* _tag_color;
    const char* _msg_color;
    bool _at_line_start;

    void write_str(const std::string& s) {
        for (char c : s) {
            if (_sb->sputc(c) == std::char_traits<char>::eof()) break;
        }
    }
};

// ====== Singleton ======
struct LoggerManager {
    PrefixColorBuf infoBuf, warnBuf, errorBuf, debugBuf;
    std::ostream log_info, log_warn, log_error, log_debug;

    LoggerManager()
    : infoBuf (std::cout.rdbuf(), "DEFAULT", "INFO",  ansi::BLUE,    ansi::BLUE)
    , warnBuf (std::cout.rdbuf(), "DEFAULT", "WARN",  ansi::YELLOW,  ansi::YELLOW)
    , errorBuf(std::cout.rdbuf(), "DEFAULT", "ERROR", ansi::RED,     ansi::RED)
    , debugBuf(std::cout.rdbuf(), "DEFAULT", "DEBUG", ansi::MAGENTA, ansi::MAGENTA)
    , log_info  (&infoBuf)
    , log_warn  (&warnBuf)
    , log_error (&errorBuf)
    , log_debug (&debugBuf) {}

    void set_prefix(const std::string& p) {
        infoBuf.set_prefix(p); warnBuf.set_prefix(p);
        errorBuf.set_prefix(p); debugBuf.set_prefix(p);
    }
    void set_tag_colors(const char* infoC, const char* warnC,
                        const char* errC,  const char* dbgC) {
        infoBuf.set_tag_color(infoC);   infoBuf.set_msg_color(infoC);
        warnBuf.set_tag_color(warnC);   warnBuf.set_msg_color(warnC);
        errorBuf.set_tag_color(errC);   errorBuf.set_msg_color(errC);
        debugBuf.set_tag_color(dbgC);   debugBuf.set_msg_color(dbgC);
    }

    static LoggerManager& instance() {
        static LoggerManager m;  // Meyers singleton
        return m;
    }
};

// Accessor globali
inline std::ostream& log_info()  { return LoggerManager::instance().log_info;  }
inline std::ostream& log_warn()  { return LoggerManager::instance().log_warn;  }
inline std::ostream& log_error() { return LoggerManager::instance().log_error; }
inline std::ostream& log_debug() { return LoggerManager::instance().log_debug; }

inline void log_set_prefix(const std::string& p) {
    LoggerManager::instance().set_prefix(p);
}
inline void log_set_tag_colors(const char* infoC, const char* warnC,
                               const char* errC,  const char* dbgC) {
    LoggerManager::instance().set_tag_colors(infoC, warnC, errC, dbgC);
}

