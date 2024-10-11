//
// Created by German Albershteyn on 23.04.2024.
//

#ifndef UNTITLED14_KRASNODARPIZZA_H
#define UNTITLED14_KRASNODARPIZZA_H

#include "PizzaIngrs.h"
#include "Kolbasing/Kolbasa.h"
#include "Sauces/Sauce.h"
#include "PizzaIngrs.h"

class KrasnodarPizza : public PizzaIngrs{
protected:
    std::unique_ptr<Kolbasa> createKolbasa() override;
    std::unique_ptr<Sauce> createSauce() override;
};


#endif //UNTITLED14_KRASNODARPIZZA_H
