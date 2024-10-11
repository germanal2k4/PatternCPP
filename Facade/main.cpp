#include <iostream>
#include "HomeTheater.h"

int main() {
    auto theatre = std::make_unique<HomeTheater>();
    theatre->watchMovie();
    theatre->listenToCD();
    theatre->finishCD();
    theatre->endMovie();
}
