// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){

    std::vector<cow> cattle;

    cattle.push_back(cow("Betty", 12, cow_purpose::meat));
    cattle.push_back(cow("Libby", 4, cow_purpose::pet));
    cattle.push_back(cow("Trudy", 8, cow_purpose::dairy));
    
    std::cout << std::endl << std::endl;
    return (0);
}
