#include <iostream>
#include <ctime>

int main()
{
    // pseudo-random = NOT TRULY RANDOM, but appears to be random

    srand(time(NULL));

    int num = rand() % 6 + 1; // 1 - 6
    int num1 = rand() % 6 + 1; // 1 - 6
    int num2 = rand() % 6 + 1; // 1 - 6

    std::cout << num << " " << num1 << " " << num2 << "\n";


    return 0;
}