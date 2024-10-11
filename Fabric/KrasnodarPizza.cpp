//
// Created by German Albershteyn on 23.04.2024.
//

#include "KrasnodarPizza.h"
#include "Sauces/Ketchapp.h"
#include "Kolbasing/Krakowian.h"

std::unique_ptr<Sauce> KrasnodarPizza::createSauce() {
    return std::make_unique<Ketchapp>();
}

std::unique_ptr<Kolbasa> KrasnodarPizza::createKolbasa() {
    return std::make_unique<Krakowian>();
}