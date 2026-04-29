#include <iostream>

double square(double length);
double cube(double length);


int main()
{
    // return = return a value back to the spot
    //          where you called the emcompassing function
    
    double length = 5.0;

    std::cout << "The area of the square is: " << square(length) << "\n";
    std::cout << "The volume of the cube is: " << cube(length) << "\n";
    
    return 0;
}

double square(double length){
    double result = length * length;
    return result;
}

double cube(double length){
    double result = length * length * length;
    return result;
}