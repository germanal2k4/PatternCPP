//
// Created by German Albershteyn on 23.04.2024.
//

#ifndef UNTITLED14_PIZZA_H
#define UNTITLED14_PIZZA_H

#include "string"
#include "Sauces/Sauce.h"
#include "Kolbasing/Kolbasa.h"
#include "Cheeses/Cheese.h"
#include "memory"

class Pizza {
public:
    std::string name;
    std::unique_ptr<Sauce> sauce;
    std::unique_ptr<Kolbasa> kolbasa;
    std::unique_ptr<Cheese> cheese;
    virtual void prepare() = 0;
    void bake();
    void cut();
    virtual ~Pizza() = default;
};


#endif //UNTITLED14_PIZZA_H
