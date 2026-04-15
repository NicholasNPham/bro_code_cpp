#include <iostream>

int main()
{

    // ternary operator = replacement to an if/else statement
    // condition ? expression1 : expression2

    int grade = 75;

    // IF ELSE STATEMENT EXAMPLE

    // if(grade >= 60)
    // {
    //     std::cout << "You passed!" << "\n";
    // }
    // else
    // {
    //     std::cout << "You failed!" << "\n";
    // }

    // TERNARY OPERATOR EXAMPLE

    (grade >= 60) ? std::cout << "You passed!" << "\n" : std::cout << "You failed!" << "\n";

    int number = 9;
    number % 2 == 1 ? std::cout << "ODD" << "\n" : std::cout << "EVEN" << "\n";

    bool hungry = true;

    hungry ? std::cout << "You are hungry!" << "\n" : std::cout << "You are fullS!" << "\n";

    std::cout << (hungry ? "You are hungry!" : "You are full!") << "\n";

    return 0;
}