//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_MALLARDDUCK_H
#define UNTITLED22_MALLARDDUCK_H

#include "Quackable.h"
#include "Observable.h"

class MallardDuck : public Quackable{
private:
    std::unique_ptr<Observable> observable;
public:
    MallardDuck();
    void quack() override;
    void notifyObservers() override;
    void registerObserver(Observer *observer) override;
    friend std::ostream& operator<<(std::ostream& os, const MallardDuck& counter);
};


#endif //UNTITLED22_MALLARDDUCK_H
