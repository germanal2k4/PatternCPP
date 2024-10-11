//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_COUNTINGDUCKFACTORY_H
#define UNTITLED22_COUNTINGDUCKFACTORY_H

#include "AbstractFactory.h"

class CountingDuckFactory : public AbstractFactory {
public:
    Quackable * createDuckCall() override;
    Quackable * createMallardDuck() override;
};


#endif //UNTITLED22_COUNTINGDUCKFACTORY_H
