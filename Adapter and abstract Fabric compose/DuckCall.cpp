//
// Created by German Albershteyn on 20.05.2024.
//

#include "DuckCall.h"
#include <iostream>

void DuckCall::quack() {
    std::cout << "Kwak-Kwak" << '\n';
    notifyObservers();
}

DuckCall::DuckCall() {
    observable = std::make_unique<Observable>(this);
}

void DuckCall::notifyObservers() {
    observable->notifyObservers();
}

void DuckCall::registerObserver(Observer *observer) {
    observable->registerObserver(observer);
}

std::ostream &operator<<(std::ostream &os, const DuckCall &counter) {
    os << "DuckCall";
    return os;
}
