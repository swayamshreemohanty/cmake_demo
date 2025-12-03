#include <iostream>
#include "calc.h"

int main() {
    int result = add(10, 20); // Calling the function from calc.cpp
    std::cout << "The result from the other file is: " << result << std::endl;
    return 0;
}


