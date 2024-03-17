// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> primes;

    primes.push_back(4);

    std::cout << primes.size() << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
