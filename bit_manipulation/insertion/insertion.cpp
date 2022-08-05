#include <cstdint>
#include <string>
#include "insertion.h"
#include <bitset>
#include <iostream>

uint32_t setClearMask(int i, int j)
{
    uint32_t mask = (~0 << (j+1));
    mask = mask | ((1 << i)-1);
    return mask;
}


uint32_t insertBits(uint32_t M, uint32_t N, int i, int j)
{
    uint32_t mask = setClearMask(i, j);
    std::bitset<32> maskBits(mask);
    std::cout<<maskBits<<"\n";
    N = N & mask;       // Clear the bits in question
    N = N | (M<<i);     // Set the value
    return N;
}