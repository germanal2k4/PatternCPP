//
// Created by German Albershteyn on 03.05.2024.
//

#include "HomeTheater.h"
#include "Amplifier.h"
#include "PopCorn.h"
#include "CdPlaya.h"

void HomeTheater::watchMovie() {
    Amplifier::on();
    PopCorn::on();
    PopCorn::pop();
}

void HomeTheater::listenToCD() {
    Amplifier::setCd();
    CdPlaya::on();
    CdPlaya::setAm(107);
}

void HomeTheater::endMovie() {
    Amplifier::off();
    PopCorn::off();
}

void HomeTheater::finishCD() {
    CdPlaya::off();
}

