
#ifndef _CLOCK_MODE_HPP_
#define _CLOCK_MODE_HPP_

#include <M5Stack.h>

#include "mode/Mode.hpp"
#include "event/PhysicalButtonEvent.hpp"

class ClockMode : public Mode
{
public:
    virtual void setup() override;
    virtual void loop() override;

private:
    PhysicalButtonEvent speakClickedEvent = PhysicalButtonEvent(&M5.BtnA);

    void speakClicked(PhysicalButtonEvent *event);
};

#endif