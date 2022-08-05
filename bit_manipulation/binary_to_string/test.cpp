#include <gtest/gtest.h>
#include <string>
#include "binary_to_string.h"

TEST (testCase, LessThanZero)
{
    double num = -0.1;
    std::string output = "ERROR";
    EXPECT_EQ(binaryToString(num), output);
}
TEST (testCase, MoreThanZero)
{
    double num = 6.9;
    std::string output = "ERROR";
    EXPECT_EQ(binaryToString(num), output);
}
TEST (testCase, NominalCase1)
{
    double num = 0.25;
    std::string output = ".01";
    EXPECT_EQ(binaryToString(num), output);
}
TEST (testCase, NominalCase2)
{
    double num = 0.5;
    std::string output = ".1";
    EXPECT_EQ(binaryToString(num), output);
}
TEST (testCase, OverFlowCase)
{
    double num = 0.16;
    std::string output = "ERROR";
    EXPECT_EQ(binaryToString(num), output);
}


int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}