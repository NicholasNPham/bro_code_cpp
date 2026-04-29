#include <iostream>
#include <ctime>

char get_user_choice(){

    char player;

    do{

    std::cout << "Enter your choice ((R)ock, (P)aper, (S)cissors): \n";
    std::cin >> player;

    }while(player != 'R' && player != 'P' && player != 'S');
 
    return player;
};

char get_computer_choice(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num){
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
        default: return 'R'; // fallback (never should happen)
    }

};

void show_choice(char choice){
        
    switch(choice){
        case 'R': std::cout << "Rock\n";
            break;
        case 'P': std::cout << "Paper\n";
            break;
        case 'S': std::cout << "Scissors\n";
            break;
    }
};
    
void choose_winner(char player, char computer){
    if(player == computer){
        std::cout << "It's a tie!\n";
    } else if((player == 'R' && computer == 'S') || 
              (player == 'P' && computer == 'R') || 
              (player == 'S' && computer == 'P')){
        std::cout << "You win!\n";
    } else {
        std::cout << "Computer wins!\n";
    }
};


int main()
{
    char player;
    char computer;

    player = get_user_choice();
    std::cout << "Player choice: ";
    show_choice(player);

    computer = get_computer_choice();
    std::cout << "Computer choice: ";
    show_choice(computer);

    choose_winner(player, computer);


    return 0;
}