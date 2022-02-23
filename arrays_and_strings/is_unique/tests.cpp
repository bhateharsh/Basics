#include "isUnique.h"
#include <gtest/gtest.h>
#include <string>

TEST (isUniqueTest, UniqueWords)
{
    std::string word = "";
    ASSERT_TRUE(isUnique(word));
    word = "abcde";
    ASSERT_TRUE(isUnique(word));
}

TEST (isUniqueTest, NotUniqueWords)
{
    std::string word = "ll";
    ASSERT_FALSE(isUnique(word));
    word = "elephant";
    ASSERT_FALSE(isUnique(word));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}