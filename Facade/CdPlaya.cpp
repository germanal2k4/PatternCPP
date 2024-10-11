//
// Created by German Albershteyn on 03.05.2024.
//

#include "CdPlaya.h"
#include "iostream"

void CdPlaya::on() {
    std::cout << "CD is on";

}

void CdPlaya::off() {
    std::cout << "CD is off";
}

void CdPlaya::setAm(int a) {
    am = a;
}
