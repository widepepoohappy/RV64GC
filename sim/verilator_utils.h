#include "verilator_utils.cpp"

// Azzeramento / riempimento
template<int N> inline void wide_zero(VlWide<N>& w) ;

template<int N> inline void wide_fill(VlWide<N>& w, uint32_t v) ;

// Bitwise base: AND/OR/XOR/NOT
template<int N> inline void wide_and(VlWide<N>& dst, const VlWide<N>& a, const VlWide<N>& b) ;

template<int N> inline void wide_or(VlWide<N>& dst, const VlWide<N>& a, const VlWide<N>& b) ;

template<int N> inline void wide_xor(VlWide<N>& dst, const VlWide<N>& a, const VlWide<N>& b) ;

template<int N> inline void wide_not(VlWide<N>& dst, const VlWide<N>& a) ;

static inline uint64_t partsel_wide64(const uint32_t* wide, int base, int width);
static inline uint32_t extract_bits(uint32_t value, int base, int width);
static inline uint64_t extract_bits64(uint64_t value, int base, int width);

template <typename T>
void print_bits(T value);
