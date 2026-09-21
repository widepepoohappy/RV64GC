#include <iostream>
#include <vector>
#include <cstdint>
#include <cmath>
#include "utils.h"
#include "generateWallaceSV.h"
#include <algorithm>
#include <fstream>
#include <string>

using namespace std;

// Funzione per estrarre i bit in un vector<bool>
vector<bool> extractBits(int64_t number, int bitWidth) {
    vector<bool> bits(bitWidth);
    for (int i = 0; i < bitWidth; ++i) {
        bits[i] = (number >> i) & 1;
    }
    return bits;
}

int main(int argc, char* argv[])  {
    int8_t A = 19;
    int8_t B = 10;

    bool generate_hardware = 0;
    string filePath = "sv/Wallace_tree.sv";

    int bitA = sizeof(A) * 8;
    int bitB = sizeof(B) * 8;
    //int Nstage = ceil(1.7*log2(bitB)-1.7);

    bool DADDA = 0; 
    bool debug = 0;

    cout << "Size of A: " << bitA << " bit" << endl;
    cout << "Size of B: " << bitB << " bit" << endl;

    int cols = bitA + bitB;
    int rows = bitB;

    vector<bool> bitsA = extractBits(A, bitA);
    vector<bool> bitsB = extractBits(B, bitB);

}