//
// Created by German Albershteyn on 20.05.2024.
//

#include "CountingDuckFactory.h"
#include "DuckCall.h"
#include "QuackCounter.h"
#include "MallardDuck.h"

Quackable* CountingDuckFactory::createDuckCall() {
    return new QuackCounter(new DuckCall());
}

Quackable * CountingDuckFactory::createMallardDuck() {
    return new QuackCounter(new MallardDuck());
}
