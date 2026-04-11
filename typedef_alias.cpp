#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // shortens the whole standerd string into pairlist
typedef std::string text_t;
typedef int number_t;

int main(){

    //typedef = reserved keywords used to create additional name
    //          (alias) for another data type.
    //          New identiffier for an existing type
    //          Helps with readability and reduces typos
    //          Use when there is a clear benefit
    //          Replaced with 'using' (work better w/ templates)


    // instead of this
    // std::vector<std::pair<std::string, int>> pairlist;  

    
    // I can use this, way shorter than typing this everytime
    pairlist_t pairlist;

    // my level of C++
    text_t first_name = "Nick";
    number_t age = 23;

    std::cout << first_name <<'\n';
    std::cout << age <<'\n';

    return 0;
}