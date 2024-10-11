//
// Created by German Albershteyn on 23.04.2024.
//

#include <iostream>
#include "PepperoniPizza.h"

PepperoniPizza::PepperoniPizza(std::unique_ptr<PizzaIngrs> pizzaIngrs) {
    this->pizzaIngrs =  std::move(pizzaIngrs);
}

void PepperoniPizza::prepare() {
    sauce = pizzaIngrs->createSauce();
    kolbasa = pizzaIngrs->createKolbasa();
    std::cout << "Preparing pizza with pepperoni ";
}
