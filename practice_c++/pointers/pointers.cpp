#include <iostream>

int main(){
    std::string name = "bro";
    int num = 1;
    std::string names[5] = {"Ace", "Bea", "Loreyn", "Shyne", "Flo"};

    std::string *pName = &name;
    int *pNum = &num;
    std::string *arrNames = names;

    std::cout<< pName << std::endl;
    std::cout<< *pName << std::endl;
    std::cout<< pNum << std::endl;
    std::cout<< *pNum << std::endl;
    std::cout<< *pNum+10 << std::endl;
    std::cout<< arrNames << std::endl;
    std::cout<< *arrNames << std::endl;
}