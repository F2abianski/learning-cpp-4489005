// Learning C++ 
// Exercise 02_03
// Using Variables, by Eduardo Corpeño 

#include <iostream>

// global variables (should be avoided)
int a, b = 5;

int main(){
    bool my_flag;
    a = 7;
    my_flag = false;
    std::cout << "a = "<< a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    
    uint positive;
    positive = 5;
    std::cout << "positive = "<< positive << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
