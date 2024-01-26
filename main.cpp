#include "system.h"
#include <ctime>

int main() {
    srand(time(0));

    System system;

    system.simulate();

    return 0;
}