#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {

    //Namespace = Provides a solution for preventing name conflicts in large projects.
    //            Each entity needs a unique name.
    //            A namespace allows for identically name entities as long as the namespaces are different.
    
    // int x = 0;
    // int x = 1;
    // namespace.cpp:10:9: error: redeclaration of 'int x'

    using namespace first;

    //tricky stuff for now,
    // using namespace std::cout;

    // same thing for second namespace
    // using namespace second;

    // if you uncomment this than this would override every instance of a different namespace and use the main namespace
    // int x = 0;

    std::cout << x << "\n";
    
    // Must refer to which namespace to output what x var is going to be
    // std::cout << first::x << "\n";
    // std::cout << second::x << "\n";

    return 0;

}