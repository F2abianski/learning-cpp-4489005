// Learning C++ 
// Exercise 02_05
// Type inference with auto, by Eduardo Corpeño 

#include <iostream>
#include <typeinfo>

int main(){
    auto a = 8;
    auto b = 122457485739547;
    auto c = 3.14f;
    auto d = 4.14;
    auto f = 'd';
    auto g = "fuck C++";

    std::cout << "Type a: " << typeid(a).name() << std::endl;
    std::cout << "Type b: " << typeid(b).name() << std::endl;
    std::cout << "Type c: " << typeid(c).name() << std::endl;
    std::cout << "Type d: " << typeid(d).name() << std::endl;
    std::cout << "Type f: " << typeid(f).name() << std::endl;
    std::cout << "Type g: " << typeid(g).name() << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
