#include <iostream>

class Human{
    public:
        std::string name;
        std::string occupation;
        int age;

    void drink(){
        std::cout << "This person is drinking." << std::endl;
    }

    void eat(){
        std::cout << "This person is eating." << std::endl; 
    }

    void sleep(){
        std::cout << "This person is sleeping." << std::endl;
    }
};

int main(){
    Human human1;

    human1.name = "Sam";
    human1.occupation = "Teacher";
    human1.age = 35;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;
    std::cout << "\n";

    human1.drink();
    human1.eat();
    human1.sleep();

    return 0;
}