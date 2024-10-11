//
// Created by German Albershteyn on 16.05.2024.
//

#include "Proxy.h"

void Proxy::request()  {
    if (realSubject == nullptr) {
        std::cout << "Proxy: Создание реального объекта." << std::endl;
        realSubject = new RealSubject();
    }

    realSubject->request();
}

