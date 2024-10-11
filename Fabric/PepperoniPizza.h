//
// Created by German Albershteyn on 23.04.2024.
//

#ifndef UNTITLED14_PEPPERONIPIZZA_H
#define UNTITLED14_PEPPERONIPIZZA_H


#include <memory>
#include "PizzaIngrs.h"
#include "Pizza.h"

class PepperoniPizza : public Pizza{
private:
    std::unique_ptr<PizzaIngrs> pizzaIngrs;
protected:
    void prepare() override;
public:
    explicit PepperoniPizza(std::unique_ptr<PizzaIngrs> pizzaIngrs);
};


#endif //UNTITLED14_PEPPERONIPIZZA_H
