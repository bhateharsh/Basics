#include <string>
#include "binary_to_string.h"
#include <iostream>
#include <math.h>

std::string binaryToString(double num)
{
    if (num <= 0 | num >+ 1)
    {
        return "ERROR";
    }
    std::string bitRepresentation;
    bitRepresentation.push_back('.');
    
    while (num > 0)
    {
        if (bitRepresentation.length() >= N_BITS)
        {
            return "ERROR";
        }

        double r = num * 2;
        if (r >= 1){
            bitRepresentation.push_back('1');
            num = r - 1;
        }
        else
        {
            bitRepresentation.push_back('0');
            num = r;
        }
    }
    return bitRepresentation;
}