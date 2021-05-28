#include <iostream>
#include <string>

int main(){
    std::cout << "please enter your first name:";
    std::string name;
    std::cin >> name;
    std::string spaces(3, '-');

    std::cout << "Hello " << name << "!" << std::endl;
    std::cout << spaces << std::endl;

    return 0;
}