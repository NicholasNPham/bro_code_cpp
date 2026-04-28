#include <iostream>

// CONSTANTS
int my_num = 3;

// FUNCTIONS
void print_num(){
    std::cout << my_num << "\n";
}

int main()
{
    // local variables = declared inside a function or block {}
    // global variables = declared outside of all functions

    int my_num = 5;
    print_num();
    std::cout << ::my_num << "\n";

    return 0;
}

