//
// Created by German Albershteyn on 23.04.2024.
//

#ifndef UNTITLED14_PIZZERIA_H
#define UNTITLED14_PIZZERIA_H

#include <utility>

#include "Pizza.h"
#include "string"
#include "memory"

class Pizzeria{
public:
    std::shared_ptr<Pizza> orderPizza(const std::string& type){
        std::shared_ptr<Pizza> pizza = createPizza(type);
        pizza->prepare();
        pizza->cut();
        pizza->bake();
        return pizza;
    }
    virtual ~Pizzeria() = default;
protected:
    virtual std::shared_ptr<Pizza> createPizza(std::string type) = 0;
};
#endif //UNTITLED14_PIZZERIA_H
