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
    House house1;

    house1.floors = 3;
    house1.paint = "white";
    house1.doors = 10;
    house1.windows = 8;

    std::cout << house1.floors << std::endl;


    return 0;
}