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
    Human human2;

    human1.name = "Sam";
    human1.occupation = "Teacher";
    human1.age = 35;

    human2.name = "Brad";
    human2.occupation = "Salesman";
    human2.age = 25;

    std::cout << human1.name << std::endl;
    std::cout << human1.occupation << std::endl;
    std::cout << human1.age << std::endl;
    std::cout << "\n";

    human1.drink();
    human1.eat();
    human1.sleep();

    std::cout << "\n";
    std::cout << human2.name << std::endl;
    std::cout << human2.occupation << std::endl;
    std::cout << human2.age << std::endl;

    return 0;
}