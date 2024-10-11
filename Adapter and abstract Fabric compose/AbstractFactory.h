//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_ABSTRACTFACTORY_H
#define UNTITLED22_ABSTRACTFACTORY_H

#include "Quackable.h"

class AbstractFactory {
public:
    virtual Quackable * createMallardDuck() = 0;
    virtual Quackable * createDuckCall() = 0;
    virtual ~AbstractFactory() = default;
};


#endif //UNTITLED22_ABSTRACTFACTORY_H
