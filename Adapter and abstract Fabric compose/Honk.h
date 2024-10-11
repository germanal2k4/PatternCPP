//
// Created by German Albershteyn on 20.05.2024.
//

#ifndef UNTITLED22_HONK_H
#define UNTITLED22_HONK_H

#include <iostream>

class Honk {
public:
    void honk();
    friend std::ostream& operator<<(std::ostream& os, const Honk& counter);
};


#endif //UNTITLED22_HONK_H
