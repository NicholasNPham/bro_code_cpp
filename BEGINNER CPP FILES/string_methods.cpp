#include <iostream>

int main()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12) {
        std::cout << "Your name cant be over 12 characters long";
    }
    else if (name.empty())
    {
        std::cout << "You didn't enter a name.";
    }
    else
    {
        std::cout << "Welcome " << name;
        name.append("@gmail.com");
        std::cout << "\nYour email is: " << name << "\n";
        std::cout << name.at(0) << "\n";
        std::cout << name.find(" ") << "\n";
        std::cout << name.erase(0, 3) << "\n";

    }

    return 0;
}