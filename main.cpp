#include <iostream>
#include "tools.h"  // We can include this because we linked the library

int main() {
    int num = 5;
    // We are using code from the library
    std::cout << "5 squared is: " << square_number(num) << std::endl;
    return 0;
}