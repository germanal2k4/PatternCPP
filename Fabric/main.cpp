#include <iostream>
#include "memory"
#include "Pizzeria.h"
#include "RostovPizzeria.h"

int main() {
    std::shared_ptr<Pizzeria> rostovPizzeria = std::make_shared<RostovPizzeria>();
    rostovPizzeria->orderPizza("Veggie");
    std::cout << std::endl;
    rostovPizzeria->orderPizza("Pepperoni");
}
