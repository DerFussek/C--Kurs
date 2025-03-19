#include <iostream>
#include <cstdint>

int main() {

    int number = 5;
    std::cout << "Value of Number: " << number << std::endl;
    std::cout << "Adresse of Number: " << &number << std:endl;

    int *p = &number;
    std::cout << "Value of p: " << p << std::endl;
    std::cout << "Adresse of p: " << &p << std:endl;


    return 0;
}