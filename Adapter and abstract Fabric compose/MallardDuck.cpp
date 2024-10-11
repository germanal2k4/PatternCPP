//
// Created by German Albershteyn on 20.05.2024.
//

#include "MallardDuck.h"
#include <iostream>

void MallardDuck::quack() {
    std::cout << "Quack-Quack" << '\n';
    notifyObservers();
}

MallardDuck::MallardDuck() {
    observable = std::make_unique<Observable>(this);
}

void MallardDuck::notifyObservers() {
    observable->notifyObservers();
}

void MallardDuck::registerObserver(Observer *observer) {
    observable->registerObserver(observer);
}

std::ostream& operator<<(std::ostream& os, const MallardDuck& counter) {
    os << "Mallard";
    return os;
}