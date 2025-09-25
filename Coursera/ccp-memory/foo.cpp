#include <iostream>

void foo()
{
    int y = 27;

    std::cout << "y in foo(): " << y << std::endl;
    std::cout << "&y in foo(): " << &y << std::endl;
}

void doo(){
    int z = 53;

    std::cout<< "z in doo(): " << z << std::endl;
    std::cout << "&z in doo(): " << &z << std::endl;
}

int main(){
    int x = 10;
    
    std::cout<< "num in main(): " << x << std::endl;
    std::cout<< "&num in main(): " << &x << std::endl;

    foo();
    doo();

}