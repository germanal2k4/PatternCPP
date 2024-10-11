//
// Created by German Albershteyn on 20.05.2024.
//

#include "Observable.h"

Observable::Observable(const QuackObservable *duck1) {
    this->duck = duck1;
}

void Observable::registerObserver(Observer *observer) {
    observers.push_back(observer);
}

void Observable::notifyObservers() {
    for(auto observer : observers) {
        if(observer != nullptr){
            observer->update(duck);
        }
    }
}
