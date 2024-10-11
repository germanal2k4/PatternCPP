//
// Created by German Albershteyn on 13.05.2024.
//

#include "SoldState.h"
#include "iostream"

void SoldState::insertQuarter() {
    std::cout << "Please wait, we’re already giving you a gumball";
}

void SoldState::ejectQuarter() {
    std::cout << "Sorry, you already turned the crank";
}

void SoldState::turnCrank() {
    std::cout << "Turning twice doesn’t get you another gumball!";
}

void SoldState::dispense() {
    gumballMachine->releaseBall();
    if(gumballMachine->getCount()){
        gumballMachine->setState(gumballMachine->getNoQuarterState());
    }else{
        std::cout << "Oops, out of gumballs!";
        gumballMachine->setState(gumballMachine->getSoldoutState());
    }
}
