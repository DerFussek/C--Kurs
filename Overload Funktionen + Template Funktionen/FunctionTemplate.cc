#include <iostream>

template <typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

int main() {
    
    double da = 1.0;
    double db = 3.0;

    std::cout << max(da, db) << std::endl;

    return 0;
}