
#pragma once

class Button {
private:
    bool indicator = false;
public:
    virtual ~Button() {

    }
    void illuminate();
    void doNotIlluminate();
    virtual void placeRequest() = 0;
};
