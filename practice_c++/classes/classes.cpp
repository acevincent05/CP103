#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;
};

int main(){
    Human human1;

    human1.name = "Sam";
    human1.occupation = "Teacher";
    human1.age = 35;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;

    return 0;
}