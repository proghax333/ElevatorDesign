
#pragma once

#include <Button.h>

class FloorButton : virtual public Button {
private:
    int direction;
public:
    FloorButton();

    virtual void placeRequest();
};
