//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_GOOSEADAPTER_H
#define UNTITLED22_GOOSEADAPTER_H

#include "Quackable.h"
#include "Honk.h"
#include "Observable.h"
#include <memory>

class GooseAdapter : public Quackable{
private:
    std::unique_ptr<Observable> observable;
    Honk* honk;
public:
    GooseAdapter(Honk* honk1);
    void quack() override;
    void registerObserver(Observer *observer) override;
    void notifyObservers() override;
    friend std::ostream& operator<<(std::ostream& os, const GooseAdapter& counter);
};


#endif //UNTITLED22_GOOSEADAPTER_H
