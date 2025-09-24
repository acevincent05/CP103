#include <iostream>

class House{
    public:
        int floors;
        std::string paint;
        int doors;
        int windows;

    void distance(){
        std::cout << "This house is too far." << std::endl;
    }

    void size(){
        std::cout << "This house is too small." << std::endl;
    }

    void price(){
        std::cout << "This house is too expensive." << std::endl;
    }
};

int main(){
    House house1;

    house1.floors = 3;
    house1.paint = "white";
    house1.doors = 10;
    house1.windows = 8;

    std::cout << "Floors no.: " << house1.floors << std::endl;
    std::cout << "Paint color: " << house1.paint << std::endl;
    std::cout << "Doors no.: " << house1.doors << std::endl;
    std::cout << "Windows no.: " << house1.windows << std::endl;

    house1.distance();
    house1.size();
    house1.price();

    return 0;
}