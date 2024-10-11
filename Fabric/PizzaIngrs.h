//
// Created by German Albershteyn on 23.04.2024.
//

#ifndef UNTITLED14_PIZZAINGRS_H
#define UNTITLED14_PIZZAINGRS_H

#include "Kolbasing/Kolbasa.h"
#include "Sauces/Sauce.h"
#include "memory"

class PizzaIngrs {
public:
    virtual std::unique_ptr<Kolbasa> createKolbasa() = 0;
    virtual std::unique_ptr<Sauce> createSauce() = 0;
    virtual ~PizzaIngrs() = default;
};


#endif //UNTITLED14_PIZZAINGRS_H
