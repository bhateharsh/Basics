#include <algorithm>
#include <string>
#include "checkPermutations.h"

bool checkPermutations(std::string &str1, std::string &str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    return str1==str2;
}

bool checkPermutations_hashTable(std::string &str1, std::string &str2)
{
    int permutationCounter[N_CHARS] = {0};
    
    if (str1.length() != str2.length())
    {
        return false;
    }
    for (int i = 0; i < str1.length(); i++)
    {
        int val = str1[i];
        permutationCounter[val]++;
        val = str2[i];
        permutationCounter[val]--;
    }
    for (int i = 0; i < N_CHARS; i++)
    {
        if (permutationCounter[i] != 0)
        {
            return false;
        }
    }
    return true;
}