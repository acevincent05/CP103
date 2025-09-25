#include <iostream>

int main(){
    int *numPtr = new int;

    std::cout << "*numPtr: " << *numPtr << std::endl;
    std::cout << "numPtr: " << numPtr << std::endl;
    std::cout << "&numPtr: " << &numPtr << std::endl;
}