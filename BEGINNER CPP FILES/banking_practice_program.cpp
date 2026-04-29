#include <iostream>
#include <iomanip>


void show_balance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";

}

double deposit(){
    
    double amount = 0;
    std::cout << "Enter the amount to deposit: $";
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "Invalid amount. Deposit must be greater than 0.\n";
        return 0;
    }

}

double withdraw(double balance){
    
    double amount = 0;

    std::cout << "Enter the amount to withdraw: $";
    std::cin >> amount;

    if(amount <= balance){
        return amount;
    }
    else{
        std::cout << "Invalid amount. You cannot withdraw more than your balance.\n";
        return 0;
}
}

int main()
{
    
    double balance = 123;
    int choice = 0;

    do{

        std::cout << "******************\n";
        std::cout << "Enter your choice:\n";
        std::cout << "******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch(choice){
            case 1: show_balance(balance);
                break;
            case 2: balance += deposit();
                show_balance(balance);
                break;
            case 3: balance -= withdraw(balance);
                show_balance(balance);
                break;
            case 4: std::cout << "Thanks for visiting!\n";
                break;
            default: std::cout << "Invalid choice\n";
        }


    }while(choice != 4);

    return 0;
}