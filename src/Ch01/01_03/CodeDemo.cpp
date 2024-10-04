// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Type in your username: " << std::flush;
    std::string str;
    std::cin >> str;
    std::cout << "This is your username: ";
    std::cout << str;

    std::cout << std::endl << std::endl;
    return (0);
}
