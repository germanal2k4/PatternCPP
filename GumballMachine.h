//
// Created by German Albershteyn on 13.05.2024.
//

#ifndef UNTITLED19_GUMBALLMACHINE_H
#define UNTITLED19_GUMBALLMACHINE_H

#include <utility>
#include <iostream>

#include "State.h"
#include "memory"
#include "SoldOutState.h"
#include "SoldState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"

class GumballMachine : public std::enable_shared_from_this<GumballMachine>{
private:
    std::shared_ptr<State> soldoutState;
    std::shared_ptr<State> state;
    std::shared_ptr<State> hasQuarterState;
    std::shared_ptr<State> noQuarterState;
    std::shared_ptr<State> soldState;
    int count = 0;
public:
    explicit GumballMachine(int numberGumballs){
        this->count = numberGumballs;
        //this->hasQuarterState = shared_ptr<State>(new HasQuarterState(getptr());
        if(numberGumballs > 0){
            this->state = noQuarterState;
        }
        else{
            this->state = soldoutState;
        }
    }
    void setState(std::shared_ptr<State> randomState){
        state = std::move(randomState);
    }
    std::shared_ptr<State> getHasQuarterState(){
        return hasQuarterState;
    }
    std::shared_ptr<State> getNoQuarterState(){
        return noQuarterState;
    }
    std::shared_ptr<State> getSoldState(){
        return soldState;
    }
    std::shared_ptr<State> getSoldoutState(){
        return soldoutState;
    }
    void releaseBall(){
        std::cout << "A gumball comes rolling out the slot...";
        if(count != 0){
            count--;
        }
    }
    int getCount(){
        return count;
    }
    std::shared_ptr<GumballMachine> getptr(){
        return shared_from_this();
    }
};


#endif //UNTITLED19_GUMBALLMACHINE_H
