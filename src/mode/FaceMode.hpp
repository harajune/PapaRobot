
#ifndef _FACE_MODE_HPP_
#define _FACE_MODE_HPP_

#include <M5Stack.h>

#include "mode/Mode.hpp"
#include "event/PhysicalButtonEvent.hpp"

class FaceMode : public Mode
{
public:
    virtual void setup() override;
    virtual void loop() override;

private:
    PhysicalButtonEvent speakClickedEvent = PhysicalButtonEvent(&M5.BtnA);

    void speakClicked(PhysicalButtonEvent *event);
};

#endif