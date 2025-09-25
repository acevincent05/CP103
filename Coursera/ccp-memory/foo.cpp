#include <iostream>

void foo()
{
    int y = 27;

    std::cout << "y in foo(): " << y << std::endl;
    std::cout << "&y in foo(): " << &y << std::endl;
}

int main(){
    int x = 10;
    
    std::cout<< "num in main(): " << x << std::endl;
    std::cout<< "&num in main(): " << &x << std::endl;

    foo();

}