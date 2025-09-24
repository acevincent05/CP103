#include <iostream>

class House{
    public:
        int floors;
        std::string paint;
        int doors;
        std::string windows;

    void distance(){
        std::cout << "This house is too far.";
    }

    void size(){
        std::cout << "This house is too small.";
    }

    void price(){
        std::cout << "This house is too expensive.";
    }
};

int main(){
    return 0;
}