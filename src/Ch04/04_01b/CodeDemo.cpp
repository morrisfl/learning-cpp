// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1234;
    bool flag = false;
    char lttr = 'd';

    if (a > 1000){
        std::cout << "Warning: a is over 1000." << std::endl;
    }
    if (a % 2)
        std::cout << "a is a odd number." << std::endl;
    else
        std::cout << "a is even number." << std::endl;    

    std::cout << std::endl << std::endl;
    return (0);
}
