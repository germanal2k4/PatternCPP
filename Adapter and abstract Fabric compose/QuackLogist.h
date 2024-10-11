//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_QUACKLOGIST_H
#define UNTITLED22_QUACKLOGIST_H

#include "Observer.h"

class QuackLogist : public Observer{
public:
    void update(const QuackObservable *duck) override;
};


#endif //UNTITLED22_QUACKLOGIST_H
