
#pragma once

class Elevator {
public:
    Elevator();

    void moveUp();
    void moveDown();
    
private:
    int currFloor;

    void openDoor();
    void closeDoor();
};
