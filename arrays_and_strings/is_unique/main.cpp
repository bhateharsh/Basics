#include <iostream>
#include <string>
#include "isUnique.h"

int main() {
    std::vector<std::string> words = {"abcde", "hello", "apple", "kite", "padle"};
    for (auto word : words)
    {
        std::cout << word << std::string(": ") << std::boolalpha << isUnique(word) << std::endl;
    }
    return 0;
}
