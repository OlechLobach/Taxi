#include "stop.h"
#include"bus.h"
#include <iostream>
#include <thread>
#include <chrono>

Stop::Stop(bool isTerminal) : isTerminal(isTerminal) {}

void Stop::addPassenger() {
    passengers.push(Passenger());
    std::cout << "A passenger has arrived at the stop.\n";
}

void Stop::addBus() {
    buses.push(Bus());
    const Bus& arrivingBus = buses.top();
    arrivingBus.arrive();
}

bool Stop::isTerminalStop() const {
    return isTerminal;
}

void Stop::simulateTimePassing() {
    std::this_thread::sleep_for(std::chrono::seconds(2));
}

void Stop::depart() {
    if (!buses.empty()) {
        Bus& departingBus = const_cast<Bus&>(buses.top());
        departingBus.depart();
        buses.pop();
    }
}