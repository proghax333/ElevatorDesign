
#pragma once

#include <Button.h>

class ElevatorButton : virtual public Button {
private:
    int direction;
public:
    ElevatorButton();

    virtual void placeRequest();
};
