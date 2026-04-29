#include <iostream>

int main()
{
    
    double temp;
    char unit;

    std::cout << "Temperature Conversion Program" << std::endl;
    std::cout << "******************************" << std::endl;
    std::cout << "Enter the unit to convert to (C or F): ";
    std::cin >> unit;

    if (unit == 'C' || unit == 'c'){
        
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;
        
        double celsius = (temp - 32 ) * 5.0 / 9.0;
        std::cout << temp << " degrees Fahrenheit is " << celsius << " degrees Celsius" << std::endl;
    }
    else if (unit == 'F' || unit == 'f'){
        
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;
        
        double fahrenheit = ((temp * (9.0 / 5.0)) + 32);
        std::cout << temp << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit" << std::endl;
    }
    else {
        std::cout << "Invalid unit entered. Please enter 'C' for Celsius or 'F' for Fahrenheit." << std::endl;
    
    }

    return 0;
}