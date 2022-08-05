#include <string>
#include <bitset>
#include <vector>
#include "isUnique.h"

bool isUnique(const std::string &word)
{
    std::bitset<N_CHARS> bits(0);
    for (int i = 0; i < word.length(); ++i)
    {
        int value = word[i];
        if(bits.test(value)>0)
        {
            return false;
        }
        bits.set(value);
    }
    return true;
}
