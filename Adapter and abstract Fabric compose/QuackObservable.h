//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_QUACKOBSERVABLE_H
#define UNTITLED22_QUACKOBSERVABLE_H

#include "Observer.h"

class QuackObservable{
public:
    virtual void registerObserver(Observer *observer) = 0;
    virtual void notifyObservers() = 0;
    virtual ~QuackObservable() = default;
};

#endif //UNTITLED22_QUACKOBSERVABLE_H
