#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // shortens the whole standerd string into pairlist

int main(){

    //typedef = reserved keywords used to create additional name
    //          (alias) for another data type.
    //          New identiffier for an existing type
    //          Helps with readability and reduces typos

    // instead of this
    // std::vector<std::pair<std::string, int>> pairlist;  
    
    // I can use this, way shorter than typing this everytime
    pairlist_t pairlist;

    return 0;
}