#include <gtest/gtest.h>
#include <string>
#include <cstdint>
#include "insertion.h"

TEST (simpleTest, providedCase)
{
    uint32_t N = 0b10000000000;
    uint32_t M = 0b00000010011;
    uint32_t R = 0b10001001100;
    int i = 2;
    int j = 6;
    EXPECT_EQ(insertBits(M, N, i, j), R);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}