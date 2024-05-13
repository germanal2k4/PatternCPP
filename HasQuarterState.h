//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_HASQUARTERSTATE_H
#define UNTITLED19_HASQUARTERSTATE_H

#include "State.h"
#include "GumballMachine.h"
using namespace std;

class HasQuarterState : public State{
private:
    std::shared_ptr<GumballMachine> gumballMachine;
public:
    explicit HasQuarterState(shared_ptr<GumballMachine> gumballMachine1);
    void insertQuarter() override;
    void ejectQuarter() override;
    void turnCrank() override;
    void dispense() override;
};


#endif //UNTITLED19_HASQUARTERSTATE_H
