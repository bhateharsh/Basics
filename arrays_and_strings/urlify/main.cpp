#include <iostream>
#include "urlGen.h"

int main(int, char**) {
    std::string text = "hello world     ";
    int count = 11;
    std::cout<<"Input String: "<<"hello world"<<"; Output String: "<<urlGen (text, count)<<std::endl;
    return 0;
}
