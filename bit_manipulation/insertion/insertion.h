#ifndef INSERTION_H_
#define INSERTION_H_

#include <cstdint>

#define N_BITS 32

uint32_t setClearMask(int i, int j);
uint32_t insertBits(uint32_t M, uint32_t N, int i, int j);

#endif