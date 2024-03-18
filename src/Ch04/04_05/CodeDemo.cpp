// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    float points = 0.0f;
    float credits = 0.0f;
    for (Grade& grade : grades){
        if (grade.get_student_id() == id){
            float num_grade;
            switch (grade.get_grade()){
            case 'A': num_grade = 4.0;
                break;
            case 'B': num_grade = 3.0;
                break;
            case 'C': num_grade = 2.0;
                break;
            case 'D': num_grade = 1.0;
                break;
            default: num_grade = 0.0;
                break;
            }
        Course course = courses[grade.get_course_id() - 1];
        points += (float)course.get_credits() * num_grade;
        credits += (float)course.get_credits();
        }
    }

    GPA = points / credits;

    std::string student_str;
    student_str = students[id - 1].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
