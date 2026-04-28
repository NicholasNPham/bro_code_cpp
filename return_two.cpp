#include <iostream>

std::string concat_strings(std::string string_1, std::string string_2);


int main()
{

    std::string first_name = "Nick";
    std::string last_name = "Pham";

    std::cout << concat_strings(first_name, last_name) << "\n";

    return 0;
}

std::string concat_strings(std::string string_1, std::string string_2){
    return string_1 + " " + string_2;
}
