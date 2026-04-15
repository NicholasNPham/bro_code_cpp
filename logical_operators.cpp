#include <iostream>

int main()
{
    // && = check if two coditions are true
    // || = check if atleast one of two coditions is true
    // ! = reverses the logical state of its operand

    int temp;
    bool sunny = true;

    std::cout << "Enter the temperature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!";
    }
    else if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!";
    }

    if(!sunny){
        std::cout << "\nIt is cloudy outside!";
    }
    else{
        std::cout << "\nIt is sunny outside!";
    }

    return 0;
}