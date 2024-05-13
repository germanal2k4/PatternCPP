//
// Created by German Albershteyn on 13.05.2024.
//

#include "HasQuarterState.h"
#include "iostream"

HasQuarterState::HasQuarterState(shared_ptr<GumballMachine> gumballMachine1) {
    this->gumballMachine = gumballMachine1;
}
void HasQuarterState::insertQuarter() {
    std::cout << "You can’t insert another quarter";
}

void HasQuarterState::ejectQuarter() {
    std::cout << "Quarter returned";
    gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank() {
    std::cout << "You turned ...";
    gumballMachine->setState(gumballMachine->getSoldState());
}

void HasQuarterState::dispense() {
    std::cout << "No gumball dispensed";
}
