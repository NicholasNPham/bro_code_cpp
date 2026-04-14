#include <iostream>

int main()
{
    // switch = alternative to using many "else if" statements
    //          compare one value against matching cases.

    int month;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is january!" << "\n";
            break;
        case 2:
            std::cout << "It is february!" << "\n";
            break;
        case 3:
            std::cout << "It is march!" << "\n";
            break;
        case 4:
            std::cout << "It is april!" << "\n";
            break;
        case 5:
            std::cout << "It is may!" << "\n";
            break;
        case 6:
            std::cout << "It is june!" << "\n";
            break;
        case 7:
            std::cout << "It is july!" << "\n";
            break;
        case 8:
            std::cout << "It is august!" << "\n";
            break;  
        case 9:
            std::cout << "It is september!" << "\n";
            break;
        case 10:
            std::cout << "It is october!" << "\n";
            break;
        case 11:
            std::cout << "It is november!" << "\n";
            break;
        case 12:
            std::cout << "It is december!" << "\n";
            break;
        default:
            std::cout << "Please enter in only numbers 1-12!" << "\n";
    }
    
    char grade;

    std::cout << "What letter grade? ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "You did great!" << "\n";
            break;
        case 'B':
            std::cout << "You did good!" << "\n";
            break;
        case 'C':
            std::cout << "You did okay!" << "\n";
            break;
        case 'D':
            std::cout << "You did bad!" << "\n";
            break;
        case 'F':
            std::cout << "You failed!" << "\n";
            break;
        default:
            std::cout << "Please enter in only letter grades A-F!" << "\n";

    }


    return 0;
}