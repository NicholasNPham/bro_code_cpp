#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL)); // seed randomness

    int num = rand() % 10 + 1; // 1 - 10
    int guess = 0;
    int tries = 1;

    while(guess != num){

        std::cout << "What is your guess? (1-10)? ";
        std::cin >> guess;

        if(guess == num){
            std::cout << "You got it right! " << "Number of Tries: " << tries;
            break;
        }
        else if(guess < num){
            std::cout << "The number is higher! Try again." << "\n";
            tries++;
        }
        else if(guess > num){
            std::cout<< "The number is lower! Try again." << "\n";
            tries++;
        }
        else{
            std::cout << "Input is invalid enter a number!." << "\n";
        }
        
    }
    return 0;
}
