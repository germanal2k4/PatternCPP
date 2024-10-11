//
// Created by German Albershteyn on 20.05.2024.
//

#include "Flock.h"

void Flock::quack() {
    for(const auto x: ducks) x->quack();
}

void Flock::add(Quackable* quacker) {
    ducks.push_back(quacker);
}

void Flock::registerObserver(Observer *observer) {
    for(auto duck : ducks){
        duck->registerObserver(observer);
    }
}
