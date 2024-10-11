#include <iostream>
#include "AbstractFactory.h"
#include "CountingDuckFactory.h"
#include "GooseAdapter.h"
#include "Honk.h"
#include "QuackCounter.h"
#include "Flock.h"
#include "QuackLogist.h"
#include <memory>

void simulate( Quackable* duck){
    duck->quack();
}
int main() {
    auto abstractFactory = std::unique_ptr<AbstractFactory>(new CountingDuckFactory());
    auto mallardDuckOne = std::unique_ptr<Quackable>(abstractFactory->createMallardDuck());
    auto duckCall = abstractFactory->createDuckCall();
    auto goose = new GooseAdapter(new Honk());
    auto flockOfDucks = new Flock();
    auto logger = new QuackLogist();
    std::cout << "Simulating with observer\n";
    flockOfDucks->add(goose);
    flockOfDucks->add(duckCall);
    auto flockOfMallards = new Flock();
    auto mallardDuckTwo = std::unique_ptr<Quackable>(abstractFactory->createMallardDuck());
    auto mallardDuckThree = std::unique_ptr<Quackable>(abstractFactory->createMallardDuck());
    auto mallardDuckFour = std::unique_ptr<Quackable>(abstractFactory->createMallardDuck());
    flockOfMallards->add(mallardDuckOne.get());
    flockOfMallards->add(mallardDuckTwo.get());
    flockOfMallards->add(mallardDuckThree.get());
    flockOfMallards->add(mallardDuckFour.get());
    flockOfDucks->add(flockOfMallards);
    flockOfDucks->registerObserver(logger);
    std::cout << "Whole flock of ducks\n";
    simulate(flockOfDucks);
    std::cout << "Whole flock of Mallards\n";
    simulate(flockOfMallards);
    std::cout << "Ducks have quacked " << QuackCounter::getQuacks() << " times\n";
}
