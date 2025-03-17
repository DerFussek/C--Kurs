#include <iostream>

std::uint32_t sum (std::uint32_t n ) {
    if (n > 1)
        return n + sum(n-1);
    return n;
}

int main() {
    std::uint32_t n = 5;
    std::uint32_t s = sum(n);

    std::cout << "Summe ist: " << s << std::endl;

    return 0;
}