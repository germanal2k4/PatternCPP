//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_OBSERVABLE_H
#define UNTITLED22_OBSERVABLE_H

#include "QuackObservable.h"
#include "Observer.h"
#include <vector>
#include <memory>

class Observable : public QuackObservable{
private:
    std::vector<Observer*> observers;
    const QuackObservable* duck;
public:
    Observable(const QuackObservable* duck1);
    void registerObserver(Observer *observer) override;
    void notifyObservers() override;
};


#endif //UNTITLED22_OBSERVABLE_H
