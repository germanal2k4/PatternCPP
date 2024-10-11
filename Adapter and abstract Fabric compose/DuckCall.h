//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_DUCKCALL_H
#define UNTITLED22_DUCKCALL_H

#include "Quackable.h"
#include "Observable.h"

class DuckCall : public Quackable{
private:
    std::unique_ptr<Observable> observable;
public:
    DuckCall();
    void quack() override;
    void notifyObservers() override;
    void registerObserver(Observer *observer) override;
    friend std::ostream& operator<<(std::ostream& os, const DuckCall& counter);


};


#endif //UNTITLED22_DUCKCALL_H
