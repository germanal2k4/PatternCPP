//
// Created by German Albershteyn on 13.05.2024.
//

#include "NoQuarterState.h"
#include "iostream"

void NoQuarterState::insertQuarter() {
    std::cout << "You inserted a quarter";
    gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter() {
    std::cout << "You haven’t inserted a quarter";

}

void NoQuarterState::turnCrank() {
    std::cout << "You turned, but there’s no quarter";
}

void NoQuarterState::dispense() {
    std::cout << "You need to pay first";
}
