
#include <Elevator.h>

Elevator::Elevator() = default;

void Elevator::moveUp() {
    ++this->currFloor;
}
void Elevator::moveDown() {
    --this->currFloor;
}