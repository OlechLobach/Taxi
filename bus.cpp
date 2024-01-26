#include "bus.h"
#include <ctime>

Bus::Bus() : freeSeats(rand() % 10 + 1), departureTime(0) {}

int Bus::getFreeSeats() const {
    return freeSeats;
}

void Bus::arrive() const {
    std::cout << "Bus has arrived with " << freeSeats << " free seats.\n";
}

void Bus::boardPassenger() {
    if (freeSeats > 0) {
        std::cout << "Passenger boarded. Free seats: " << --freeSeats << "\n";
    }
    else {
        std::cout << "No free seats available.\n";
    }
}

void Bus::depart() {
    departureTime = std::time(0);
    std::tm localTime;
    localtime_s(&localTime, &departureTime);
    char buffer[80];
    std::strftime(buffer, 80, "%c", &localTime);
    std::cout << "Bus departed at: " << buffer << "\n";
}

bool Bus::operator<(const Bus& other) const {
    return freeSeats < other.freeSeats;
}