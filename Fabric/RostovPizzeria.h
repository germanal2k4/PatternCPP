//
// Created by German Albershteyn on 23.04.2024.
//

#ifndef UNTITLED14_ROSTOVPIZZERIA_H
#define UNTITLED14_ROSTOVPIZZERIA_H

#include "Pizzeria.h"

class RostovPizzeria : public Pizzeria{
    std::shared_ptr<Pizza> createPizza(std::string type) override;
};


#endif //UNTITLED14_ROSTOVPIZZERIA_H
