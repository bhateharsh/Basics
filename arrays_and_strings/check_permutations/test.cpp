#include <gtest/gtest.h>
#include "checkPermutations.h"
#include <string>

TEST (checkPermutationsTest, isPermutation)
{
    std::string word1 = "abcd";
    std::string word2 = "dbca";
    ASSERT_TRUE(checkPermutations(word1, word2));
    word1 = "q2b2";
    word2 = "2b2q";
    ASSERT_TRUE(checkPermutations(word1, word2));
}

TEST (checkPermutationsTest, notPermutation)
{
    std::string word1 = "acd";
    std::string word2 = "dbca";
    ASSERT_FALSE(checkPermutations(word1, word2));
    word1 = "qa";
    word2 = "aa";
    ASSERT_FALSE(checkPermutations(word1, word2));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}