#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int age;

    std::cout << "What is your name?: ";
    std::cin >> name;
    
    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old."23 << "\n";

    return 0;
}