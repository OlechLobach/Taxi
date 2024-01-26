#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger {
public:
    Passenger();

    int getStayTime() const;

private:
    int stayTime;
};

#endif