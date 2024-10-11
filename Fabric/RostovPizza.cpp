//
// Created by German Albershteyn on 23.04.2024.
//

#include "RostovPizza.h"
#include "Kolbasing/Braunschweig.h"
#include "Sauces/Mayo.h"

std::unique_ptr<Kolbasa> RostovPizza::createKolbasa() {
    return std::make_unique<Braunschweig>();
}
std::unique_ptr<Sauce> RostovPizza::createSauce() {
    return  std::make_unique<Mayo>();
}