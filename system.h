#ifndef SYSTEM_H
#define SYSTEM_H

#include "stop.h"
#include <queue>

class System {
public:
    System();
    void simulate();

private:
    static const int SIMULATION_DURATION = 10; // «м≥нено на статичну константу
    Stop stops[4]{ Stop(false), Stop(false), Stop(false), Stop(true) };
    std::queue<Bus> availableBuses;

    Bus& getAvailableBus();
};

#endif // SYSTEM_H