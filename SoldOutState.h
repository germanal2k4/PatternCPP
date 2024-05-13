//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_SOLDOUTSTATE_H
#define UNTITLED19_SOLDOUTSTATE_H

#include "State.h"
#include "GumballMachine.h"

class SoldOutState : public State{
    std::shared_ptr<GumballMachine> gumballMachine;
public:
    explicit SoldOutState(GumballMachine* gumballMachine1){
        this->gumballMachine = static_cast<const shared_ptr<GumballMachine>>(gumballMachine1);
    }
    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;

    SoldOutState(GumballMachine *pMachine);
};


#endif //UNTITLED19_SOLDOUTSTATE_H
