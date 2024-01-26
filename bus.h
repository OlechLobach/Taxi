#ifndef BUS_H
#define BUS_H

#include <iostream>

class Bus {
public:
    Bus();
    int getFreeSeats() const;
    void arrive() const;
    void boardPassenger();
    void depart();

    bool operator<(const Bus& other) const;

private:
    int freeSeats;
    // Додавання члена для зберігання часу відправлення
    std::time_t departureTime;
};

#endif 