#include <M5Stack.h>

#include "event/PhysicalButtonEvent.hpp"
#include "mode/FaceMode.hpp"
#include "mode/ClockMode.hpp"
#include "modes.h"

void FaceMode::setup()
{
    speakClickedEvent.addListener(&FaceMode::speakClicked, this);
}

void FaceMode::loop()
{
    speakClickedEvent.listen();
}

void FaceMode::start()
{
    avatar.start();
}

void FaceMode::stop()
{
    avatar.stop();
}

void FaceMode::speakClicked(PhysicalButtonEvent *event)
{
    Serial.println("face");
    switchMode(&clockMode);
}