// Learning C++ 
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "records.h"


int main(){
    int id;
    StudentRecords SR;
    
    SR.read_courses("courses.txt");
    SR.read_grades("grades.txt");
    SR.read_students("students.txt");

    std::ofstream outFile;
    SR.report_file(outFile);

    std::cout << std::endl << std::endl;
    return (0);
}
