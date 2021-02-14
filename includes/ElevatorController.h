
#pragma once

#include <Elevator.h>

class ElevatorController {
public:
    ElevatorController();

    void shutdownElevator();
    void startElevator();
    void reset();
private:
    Elevator elevator;
};
