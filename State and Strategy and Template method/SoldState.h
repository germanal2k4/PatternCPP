//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_SOLDSTATE_H
#define UNTITLED19_SOLDSTATE_H

#include "State.h"
#include "GumballMachine.h"

class SoldState : public State{
    std::shared_ptr<GumballMachine> gumballMachine;
public:
    explicit SoldState(GumballMachine* gumballMachine1){
        this->gumballMachine = static_cast<const shared_ptr<GumballMachine>>(gumballMachine1);
    }
    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;
};


#endif //UNTITLED19_SOLDSTATE_H
