#include <iostream>

int main() {
    auto *p = new std::int32_t{4}
    delete p;
    p = nullptr;

    if(p != nullptr) {

        std::cout << p << std::endl;
    } else {
        std::cout << "Ungueltige Speicheradresse!!" << std::endl;
    }
    

    return 0;
}