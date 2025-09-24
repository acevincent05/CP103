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
};

int main(){
    return 0;
}