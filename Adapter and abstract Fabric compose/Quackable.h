//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_QUACKABLE_H
#define UNTITLED22_QUACKABLE_H

#include "QuackObservable.h"
#include <iostream>

class Quackable : public QuackObservable{
public:
    virtual void quack() = 0;
};

#endif //UNTITLED22_QUACKABLE_H
