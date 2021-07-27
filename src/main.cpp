#include <Arduino.h>

#include "modes.h"
#include "mode/Mode.hpp"
#include "event/PhysicalButtonEvent.hpp"

PhysicalButtonEvent *buttonB;

FaceMode faceMode;
ClockMode clockMode;

void modeButtonClicked(PhysicalButtonEvent *event)
{
    Serial.println("button clicked");
}

void setup()
{
    M5.begin();
    Serial.begin(115200);

    Serial.println("begin");
    buttonB = new PhysicalButtonEvent(&M5.BtnB);
    buttonB->addListener(modeButtonClicked);

    faceMode.setup();
    clockMode.setup();

    switchMode(&faceMode);
}

void loop()
{
    buttonB->listen();
    mode->loop();
}