
#include <Button.h>

Button::~Button() {
    // Do Nothing
}

void Button::illuminate() {
    this->indicator = true;
}
void Button::doNotIlluminate() {
    this->indicator = false;
}

