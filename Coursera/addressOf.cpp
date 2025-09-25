#include <iostream>

int main() {
    int x = 1;
    int y = 2;
    std::string z = "hi";

    std::cout << "Value: " << x << std::endl;
    std::cout << "Address: " << &x << x << std::endl;
    std::cout << "Value: " << y << std::endl;
    std::cout << "Address: " << &y << x << std::endl;
    std::cout << "Value: " << z << std::endl;
    std::cout << "Address: " << &z;

    return 0;
}