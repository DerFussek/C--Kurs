#include <iostream>

int main() {
    int *p = new int{4};

    std::cout << "Adress of p: " << &p << std::cout;
    std::cout << "P points to the adress: " << p << std::cout;
    std::cout << "Wert auf den P zeigt: " << *p << std::cout;

    delete p;

    return 0;
}