#include <iostream>

namespace first{
    int x = 2;
}

namespace second{
    int x = 3;
}

int main() {
    int x = 1;

    std::cout << "local: " << x << std::endl;
    std::cout << "namespace first: " << first::x << std::endl;
}