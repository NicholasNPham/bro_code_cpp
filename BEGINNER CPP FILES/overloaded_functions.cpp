#include <iostream>

void bake_pizza();
void bake_pizza(std::string topping_1);
void bake_pizza(std::string topping_1, std::string topping_2);

int main()
{
    
    bake_pizza("pepperoni", "mushrooms");

    return 0;
}

void bake_pizza(){
    std::cout << "Here is your pizza!\n";
}

void bake_pizza(std::string topping_1){
    std::cout << "Here is your pizza with " << topping_1 << "!\n";
}

void bake_pizza(std::string topping_1, std::string topping_2){
    std::cout << "Here is your pizza with " << topping_1 << " and " << topping_2 << "!\n";
}