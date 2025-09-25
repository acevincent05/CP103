#include <iostream>

int main(){
    std::string name = "bro";

    std::string *pName = &name;

    std::cout<< pName << std::endl;
    std::cout<< *pName;
}