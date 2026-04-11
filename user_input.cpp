#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    std::string full_name;
    int age;

    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cin.ignore();

    std::cout << "What is your full name?: ";
    std::getline(std::cin, full_name);
    
    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "Hello " << full_name << "\n";
    std::cout << "You are " << age << " years old." << "\n";

    return 0;
}