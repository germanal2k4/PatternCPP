//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_FLOCK_H
#define UNTITLED22_FLOCK_H

#include <vector>
#include "Quackable.h"

class Flock : public Quackable{
private:
    std::vector<Quackable*> ducks;
public:
    void quack() override;
    void add(Quackable* quacker);
    void registerObserver(Observer *observer) override;
    void notifyObservers() {};
};


#endif //UNTITLED22_FLOCK_H
