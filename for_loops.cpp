#include <iostream>

int main()
{

    // for loop = executes a block of code a limited amount of times
    //           for(counter; condition; increment/decrement)
    
    for(int i = 1; i <= 3; i++){
        std::cout << i << "\n";
    }

    std::cout << "Finished counting!" << "\n";

    return 0;
}