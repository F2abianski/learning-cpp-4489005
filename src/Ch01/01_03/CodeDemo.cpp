// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout <<"What's your name?" << std::flush;
    std::string str;
    std::cin >> str;
    std::cout << str + " is a very nice name!";

    std::cout << std::endl << std::endl;
    return (0);
}
