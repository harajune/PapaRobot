#include <Arduino.h>

#include "common.h"
#include "mode/Mode.hpp"
#include "mode/FaceMode.hpp"
#include "event/PhysicalButtonEvent.hpp"

PhysicalButtonEvent *buttonB;

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

    switchMode(new FaceMode());
}

void loop()
{
    buttonB->listen();
    mode->loop();
}