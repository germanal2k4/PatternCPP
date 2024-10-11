//
// Created by German Albershteyn on 23.04.2024.
//

#include "RostovPizzeria.h"
#include "PizzaIngrs.h"
#include "RostovPizza.h"
#include "VeggiePizza.h"
#include "PepperoniPizza.h"

std::shared_ptr<Pizza> RostovPizzeria::createPizza(std::string type) {
    std::unique_ptr<PizzaIngrs> pizzaIngrs = std::make_unique<RostovPizza>();
    if(type == "Veggie"){
        return std::make_shared<VeggiePizza>(std::move(pizzaIngrs));
    } else if(type == "Pepperoni"){
        return std::make_shared<PepperoniPizza>(std::move(pizzaIngrs));
    }
}
