//
// Created by German Albershteyn on 20.05.2024.
//

#include "GooseAdapter.h"

GooseAdapter::GooseAdapter(Honk* honk1) {
    this->honk = honk1;
    observable = std::make_unique<Observable>(this);
}

void GooseAdapter::quack() {
    honk->honk();
    notifyObservers();
}

void GooseAdapter::registerObserver(Observer *observer) {
    observable->registerObserver(observer);
}

void GooseAdapter::notifyObservers() {
    observable->notifyObservers();
}

std::ostream &operator<<(std::ostream &os, const GooseAdapter &counter) {
    os << "Goose";
    return os;
}
