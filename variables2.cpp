#include <iostream>

int main(){

    //integer (whole number)
    int age = 23;
    int year = 2002;
    int days = 7.5;

    //double (numbers including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character 
    char grade = 'A';
    char inital = 'B';

    //boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string (objects that represents a sequence of text)
    std::string name = "Nick";
    std::string day = "Friday";
    std::string food = "Banh Mi";
    std::string fakeStreet = "123 Fake St.";

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old" << "\n";
    std::cout << name << "\n";
    std::cout << power << '\n';
    std::cout << grade << '\n';
    std::cout << price << "\n";
    std::cout << days;

    return 0;
}