//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_OBSERVER_H
#define UNTITLED22_OBSERVER_H

class QuackObservable;

class Observer{
public:
    virtual void update(const QuackObservable *duck) = 0;
    virtual ~Observer() = 0;
};
#endif //UNTITLED22_OBSERVER_H
