#include <iostream>

double max(double a, double b) {
    return a > b ? a : b;
}

int max(int a, int b) {
    return a > b ? a : b;
}

std::uint32_t max(std::uint32_t a, std::uint32_t b) {
    return a > b ? a : b;
}


int main() {

    double da = 1.0;
    double db = 3.0;

    std::cout << max(da, db) << std::endl;

    return 0;
}