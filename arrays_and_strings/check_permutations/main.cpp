#include <iostream>
#include <vector>
#include <string>
#include "checkPermutations.h"

int main(int, char**) 
{
    std::vector<std::string> words = {"abcd", "dbca", "aaaa", "bbbb", "ab", "ba"};
    std::cout << words[0] << std::string(", ") << words[1] << std::string(": ") << std::boolalpha << checkPermutations(words[0], words[1]) << std::endl;
    std::cout << words[2] << std::string(", ") << words[3] << std::string(": ") << std::boolalpha << checkPermutations(words[2], words[3]) << std::endl;
    return 0;
}
