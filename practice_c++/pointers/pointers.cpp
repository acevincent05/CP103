#include <iostream>

int main(){
    std::string name = "bro";
    int num = 1;

    std::string *pName = &name;
    int *pNum = &num;

    std::cout<< pName << std::endl;
    std::cout<< *pName << std::endl;
    std::cout<< pNum << std::endl;
    std::cout<< *pNum << std::endl;
    std::cout<< *pNum+10 << std::endl;
}