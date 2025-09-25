#include <iostream>

int main() {
    int x = 1;
    int y = 2;

    std::cout << "Value: " << x << std::endl;
    std::cout << "Address: " << &x << x << std::endl;
    std::cout << "Value: " << y << std::endl;
    std::cout << "Address: " << &y << x;

    return 0;
}