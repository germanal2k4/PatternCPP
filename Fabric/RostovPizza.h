//
// Created by German Albershteyn on 23.04.2024.
//

#ifndef UNTITLED14_ROSTOVPIZZA_H
#define UNTITLED14_ROSTOVPIZZA_H

#include "PizzaIngrs.h"
#include "Kolbasing/Kolbasa.h"
#include "Sauces/Sauce.h"

class RostovPizza : public PizzaIngrs{
protected:
    std::unique_ptr<Kolbasa> createKolbasa() override;
    std::unique_ptr<Sauce> createSauce() override;
};


#endif //UNTITLED14_ROSTOVPIZZA_H
