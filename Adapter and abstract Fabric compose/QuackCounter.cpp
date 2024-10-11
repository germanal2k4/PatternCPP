//
// Created by German Albershteyn on 20.05.2024.
//

#include "QuackCounter.h"

int QuackCounter::numberOfQuacks = 0;

QuackCounter::QuackCounter(Quackable *quackable) {
    this->duck = quackable;
}

void QuackCounter::quack() {
    duck->quack();
    numberOfQuacks++;
}

int QuackCounter::getQuacks() {
    return numberOfQuacks;
}

void QuackCounter::registerObserver(Observer *observer) {
    duck->registerObserver(observer);
}

void QuackCounter::notifyObservers() {
    duck->notifyObservers();
}
