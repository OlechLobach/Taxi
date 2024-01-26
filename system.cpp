#include "system.h"

System::System() {}

void System::simulate() {
    for (int i = 0; i < SIMULATION_DURATION; ++i) {
        for (auto& stop : stops) {
            stop.simulateTimePassing();

            if (rand() % 2 == 0) {
                stop.addPassenger();
            }

            if (rand() % 5 == 0) {
                stop.addBus();
                Bus& bus = getAvailableBus();
                std::cout << "Bus has " << bus.getFreeSeats() << " free seats.\n";
                bus.boardPassenger();
                stop.depart();
            }
        }
    }
}

Bus& System::getAvailableBus() {
    if (availableBuses.empty()) {
        availableBuses.push(Bus());
    }
    return availableBuses.front();
}