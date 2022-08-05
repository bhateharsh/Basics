#include <stdio.h>
#include <cstdint>
#include "insertion.h"

int main(int, char**) 
{
    printf("HelloWorld\n");
    uint32_t N = 0b10000000000;
    uint32_t M = 0b00000010011;
    uint32_t R = 0b10001001100;
    int i = 2;
    int j = 6;
    // uin
    uint32_t output = insertBits(M, N, i, j);
    bool result = (output == R);
    printf("Is Result Correct: %d\n", result);
    return 0;
}
