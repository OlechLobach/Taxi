#ifndef STOP_H
#define STOP_H

#include "passenger.h"
#include "bus.h"
#include <queue>

class Stop {
public:
    Stop(bool isTerminal);
    void addPassenger();
    void addBus();
    bool isTerminalStop() const;
    void simulateTimePassing();
    // Додавання нового методу для відправлення автобуса
    void depart();

private:
    bool isTerminal;
    std::queue<Passenger> passengers;
    std::priority_queue<Bus> buses;
};

#endif // STOP_H