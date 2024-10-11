//
// Created by German Albershteyn on 23.04.2024.
//

#include <iostream>
#include "VeggiePizza.h"
#include "Cheeses/Russian.h"

VeggiePizza::VeggiePizza(std::unique_ptr<PizzaIngrs> pizzaIngrs){
    this->pizzaIngrs = std::move(pizzaIngrs);
}

void VeggiePizza::prepare() {
    sauce = pizzaIngrs->createSauce();
    std::cout << "Preparing pizza veggie pizza ";
}
