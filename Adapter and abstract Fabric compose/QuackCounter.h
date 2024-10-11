//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_QUACKCOUNTER_H
#define UNTITLED22_QUACKCOUNTER_H

#include "Quackable.h"

class QuackCounter : public Quackable{
private:
    Quackable* duck;
    static int numberOfQuacks;
public:
    explicit QuackCounter(Quackable* quackable);
    void quack() override;
    static int getQuacks();
    void registerObserver(Observer *observer) override;
    void notifyObservers() override;
};


#endif //UNTITLED22_QUACKCOUNTER_H
