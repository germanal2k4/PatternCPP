cmake_minimum_required(VERSION 3.24)
project(untitled22)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled22 main.cpp Quackable.h MallardDuck.h MallardDuck.cpp DuckCall.h DuckCall.cpp Honk.h Honk.cpp GooseAdapter.h GooseAdapter.cpp QuackCounter.h QuackCounter.cpp AbstractFactory.h CountingDuckFactory.h CountingDuckFactory.cpp Flock.h Flock.cpp QuackObservable.h Observer.h Observable.h Observable.cpp QuackLogist.h QuackLogist.cpp)
