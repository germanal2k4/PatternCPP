//
// Created by German Albershteyn on 13.05.2024.
//

#include "SoldOutState.h"
#include "iostream"

void SoldOutState::insertQuarter() {
    std::cout << "You can’t insert a quarter, the machine is sold out";
}

void SoldOutState::ejectQuarter() {
    std::cout << "You can’t eject, you haven’t inserted a quarter yet";
}

void SoldOutState::turnCrank() {
    std::cout << "You turned, but there are no gumballs";
}

void SoldOutState::dispense() {
    std::cout << "No gumball dispensed";
}

SoldOutState::SoldOutState(GumballMachine *pMachine) {
    gumballMachine = std::make_unique<GumballMachine>(pMachine);

}
