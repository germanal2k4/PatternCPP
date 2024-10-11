//
// Created by German Albershteyn on 16.05.2024.
//

#ifndef UNTITLED20_PROXY_H
#define UNTITLED20_PROXY_H

#include "Subject.h"
#include "RealSubject.h"

class Proxy : public Subject{
private:
    RealSubject* realSubject;
public:
    Proxy() : realSubject(nullptr) {}

    ~Proxy() {
        delete realSubject;
    }
    void request() override;
};


#endif //UNTITLED20_PROXY_H
