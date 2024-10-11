//
// Created by German Albershteyn on 20.05.2024.
//

#include "Honk.h"
#include <iostream>

void Honk::honk() {
    std::cout << "Honk-Honk" << '\n';
}

std::ostream &operator<<(std::ostream &os, const Honk &counter) {
    os << "Goose";
    return os;
}
