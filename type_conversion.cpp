#include <iostream>

int main()
{
    // type conversion = conversion of a value of one data type to another;
    //                   Implicit = automatic
    //                   Explicit = Precede value with a new data type (int)


    int x = 3.14;
    double x_2 = (int) 3.14;
    char x_3 = 100;

    //use case example
    int correct = 8;
    int questions = 10;
    double score = correct/ (double) questions * 100;


    // because int x was intitalized as int it truncated as 3
    std::cout << x << '\n';
    
    // because int x was involved in a type conversion changing to double, it print with the decimal points.
    std::cout << x_2 << '\n';

    std::cout << x_3 << '\n';

    // implicitly casted
    std::cout << (char) 100 << '\n';

    std::cout << score << "%";

    return 0;

}