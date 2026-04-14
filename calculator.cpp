#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "********************* CALCULATOR *********************" << "\n";
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "******************************************************" << "\n"; 

    std::cout << "Number 1: ";
    std::cin >> num1;
    std::cout << "Number 2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << result << "\n";
            break;
        case '-':
            result = num1 - num2;
            std::cout << result << "\n";
            break;
        case '*':
            result = num1 * num2;   
            std::cout << result << "\n";
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                std::cout << result << "\n";
                break;         
            }
            else{
                std::cout << "Error: Cannot divide by zero!" << "\n";
                break;
            }
        default:
            std::cout << "That wasn't a valid response!" << "\n";
    }
    std::cout << "******************************************************" << "\n"; 

    return 0;

}