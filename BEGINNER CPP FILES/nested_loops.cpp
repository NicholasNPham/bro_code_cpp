#include <iostream>

int main()
{
    /*
        loop(){
            loop(){
            
            }
        }
    */

    // for (int i = 1; i <= 3; i++){
    //     for (int j = 1; j  <= 10; j++){
    //         std::cout << j << " ";
    //     }
    //     std::cout << "\n";  
    // }

    int rows, columns;
    char symbol;
    std::cout << "Enter number of rows: ";
    std::cin >> rows;
    std::cout << "Enter number of columns: ";
    std::cin >> columns;
    std::cout << "Enter a symbol to use: ";
    std::cin >> symbol;


    for (int i = 1; i <= rows; i++){
        for (int j = 1; j  <= columns; j++){
            std::cout << symbol << " ";
        }
        std::cout << "\n";  
    }



    return 0;
}