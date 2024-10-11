//
// Created by German Albershteyn on 23.04.2024.
//

#ifndef UNTITLED14_VEGGIEPIZZA_H
#define UNTITLED14_VEGGIEPIZZA_H

#include "PizzaIngrs.h"
#include "Pizza.h"
#include "memory"

class VeggiePizza : public Pizza{
private:
    std::unique_ptr<PizzaIngrs> pizzaIngrs;
protected:
    void prepare() override;
public:
    explicit VeggiePizza(std::unique_ptr<PizzaIngrs> pizzaIngrs);
};


#endif //UNTITLED14_VEGGIEPIZZA_H
