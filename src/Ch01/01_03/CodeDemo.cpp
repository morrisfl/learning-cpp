// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout << "Enter your name: " << flush;
    cin >> str;
    cout << "Nice to meet you, " << str << "!" << endl;

    std::cout << std::endl << std::endl;
    return (0);
}
