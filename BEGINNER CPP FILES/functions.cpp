#include <iostream>

void happy_birthday(std::string name, int age);

int main()
{
    // function = a block of resuable code

    std::string name = "Nick";
    int age = 23;

    happy_birthday(name, age);

    return 0;
}

void happy_birthday(std::string name, int age){
    std::cout << "Happy Birthday to You! " << name << "!\n";
    std::cout << "Happy Birthday to You! " << name << "!\n";
    std::cout << "Happy Birthday dear " << name << "!\n";
    std::cout << "Happy Birthday to You! " << name << "!\n";
    std::cout << "You are now " << age << " years old!\n";
}
