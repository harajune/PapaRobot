
#ifndef _FACE_MODE_HPP_
#define _FACE_MODE_HPP_

#include <M5Stack.h>
#include <Avatar.h>

#include "mode/Mode.hpp"
#include "event/PhysicalButtonEvent.hpp"

class FaceMode : public Mode
{
public:
    virtual void setup() override;
    virtual void loop() override;
    virtual void start() override;
    virtual void stop() override;

private:
    PhysicalButtonEvent speakClickedEvent = PhysicalButtonEvent(&M5.BtnA);
    m5avatar::Avatar avatar;

    void speakClicked(PhysicalButtonEvent *event);
};

#endif