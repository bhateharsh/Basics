#include <string>
#include <stdexcept>
#include <vector>
#include "urlGen.h"

std::string urlGen (std::string &text, const int count)
{
    const std::string replace = "%20";
    int nSpaces = 0;
    int fCount = 0;
    int curr = 0;
    for (int i = 0; i < count; i++)
    {
        if (text[i] == ' ')
        {
            nSpaces++;
        }
    }
    fCount = count+(2*nSpaces);
    if (text.length() < fCount)
    {
        throw std::invalid_argument("Input string is not sufficiently large");
    }
    curr = fCount-1;
    for (int i = count-1; i >=0; i--)
    {
        if (text[i] == ' ')
        {
            text[curr] = '0';
            text[curr-1] = '2';
            text[curr-2] = '%';
            curr = curr-3;
        }
        else{
            text[curr] = text[i];
            curr--;
        }
    }
    return text;
}