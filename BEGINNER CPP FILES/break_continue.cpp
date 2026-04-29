#include <iostream>

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

    for(int i = 1; i <= 20; i++){
        if (i == 13){
            continue; // skip 13
        }
        else if (i == 17){
            break; // stop loop at 17
        }
        std::cout << i << "\n";
    }


    return 0;
}