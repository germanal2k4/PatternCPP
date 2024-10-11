//
// Created by German Albershteyn on 03.05.2024.
//

#include "Amplifier.h"
#include "PopCorn.h"
#include "iostream"

void Amplifier::setCd() {
    std::cout << "CD is set";
}

void Amplifier::on() {
    std::cout << "Now you can watch film";
}

void Amplifier::off() {
    PopCorn::off();
    CdPlaya::off();
}
