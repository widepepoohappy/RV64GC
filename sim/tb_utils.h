#include "tb_utils.cpp"  

#ifdef OOO_EXEC
void print_rs1 (Vooo_extension *top);
void print_rs2 (Vooo_extension *top);
#endif
int gen_rand_un (int upper_range, int bitwidth, uint32_t seed);
void print_rs_entry(array<uint64_t, 8> rs_entry);
vector<array<uint64_t, NUM_FIELDS>> rs_entry_extract_all(uint32_t* rs_entry, int depth);
