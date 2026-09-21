#include <algorithm>
#include <cstdint>
#include "verilated.h"  // per VlWide<N>
#include <verilated_vpi.h>
#include <vpi_user.h>
#include <type_traits>
#include <iostream>

// Azzeramento / riempimento
template<int N>
inline void wide_zero(VlWide<N>& w) {
    for (int i = 0; i < N; ++i) w[i] = 0u;
}

template<int N>
inline void wide_fill(VlWide<N>& w, uint32_t v) {
    for (int i = 0; i < N; ++i) w[i] = v;
}

// Bitwise base: AND/OR/XOR/NOT
template<int N>
inline void wide_and(VlWide<N>& dst, const VlWide<N>& a, const VlWide<N>& b) {
    for (int i = 0; i < N; ++i) dst[i] = a[i] & b[i];
}

template<int N>
inline void wide_or(VlWide<N>& dst, const VlWide<N>& a, const VlWide<N>& b) {
    for (int i = 0; i < N; ++i) dst[i] = a[i] | b[i];
}

template<int N>
inline void wide_xor(VlWide<N>& dst, const VlWide<N>& a, const VlWide<N>& b) {
    for (int i = 0; i < N; ++i) dst[i] = a[i] ^ b[i];
}

template<int N>
inline void wide_not(VlWide<N>& dst, const VlWide<N>& a) {
    for (int i = 0; i < N; ++i) dst[i] = ~a[i];
}


// Estrae fino a 64 bit da un array di 32 bit (LSB in wide[0])
static inline uint64_t partsel_wide64(const uint32_t* wide, int base, int width) {
    // precondizioni
    if (width <= 0) return 0;
    if (width > 64) width = 64;  // limitiamo a 64 per confronto/stampa

    uint64_t out = 0;
    int bit = 0;
    while (bit < width) {
        const int abs_bit = base + bit;
        const int word_idx = abs_bit >> 5;      // /32
        const int word_bit = abs_bit & 31;      // %32

        const uint64_t w = wide[word_idx];
        const int take = std::min(32 - word_bit, width - bit);
        const uint64_t chunk = (w >> word_bit) & ((uint64_t(1) << take) - 1);

        out |= (chunk << bit);
        bit += take;
    }
    return out;
}

static inline uint32_t extract_bits(uint32_t value, int base, int width) {
    if (width <= 0) return 0;
    if (width >= 32) return value >> base;  // extract up to MSB

    uint32_t mask = (width == 32) ? 0xFFFFFFFFu : ((1u << width) - 1);
    return (value >> base) & mask;
}


static inline uint64_t extract_bits64(uint64_t value, int base, int width)
{
    if (width <= 0) return 0;

    // Clamp base
    if (base < 0) return 0;
    if (base >= 64) return 0;

    // Se width va oltre MSB, estrai fino alla fine
    if (width >= 64 || base + width > 64)
        return value >> base;

    uint64_t mask = (width == 64)
                        ? 0xFFFFFFFFFFFFFFFFull
                        : ((1ull << width) - 1);

    return (value >> base) & mask;
}


template <typename T>
void print_bits(T value) {
    static_assert(std::is_integral<T>::value, "T deve essere un tipo intero.");

    const int bits = sizeof(T) * 8;
    int cnt = 0;
    for (int i = bits - 1; i >= 0; --i) {
        std::cout << ((value >> i) & 1);
	cnt++;
	if(cnt == 16 && i != 0) {
	    std::cout << "_";
	    cnt = 0;
	}
    }
}

