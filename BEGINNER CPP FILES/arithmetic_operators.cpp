#include <iostream>

int main(){

    // arithmetic operators = return the result of a specific arithmetic operation ( + - * / )

    // Notes on "/"
    // when setting a variable as an int. if the division results in a decimal points. the result will be truncated, leaving a whole number

    // PEMDAS
    // Parenthesis
    // Multiplication & Division
    // Addition & Subtractions

    int students = 20;
    double students_d = 20;
    int remainder = students % 2;
    int remainder_2 = students % 3;

    // PEMDAS EXAMPLE
    int pemdas = 6 - 5 + 4 * 3 / 2;
    int pemdas_2 = 6 - (5 + 4) * 3 / 2;


    // students = students + 1;
    // students+=1;
    // students++;

    // students = students - 1;
    // students-=2;
    // students--;

    // students = students * 2;
    // students*=2;

    students = students / 2;
    students/=2;

    students_d = students_d / 3;

    std::cout << students << '\n';
    std::cout << students_d << '\n';
    std::cout << remainder << '\n';
    std::cout << remainder_2 << '\n';
    std::cout << pemdas << '\n';
    std::cout << pemdas_2 << '\n';

    return 0;
}