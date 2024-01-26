#include "passenger.h"
#include <cstdlib>

Passenger::Passenger() : stayTime(rand() % 10 + 1) {}

int Passenger::getStayTime() const {
    return stayTime;
}