#include <iostream>
#include <cmath>

int main()
{
    int a;
    int b;

    std::cout << "Enter the length of A: " << "\n";
    std::cin >> a;

    std::cout << "Enter the length of B: " << "\n";
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The length of C is: " << c << "\n";

    return 0;
}