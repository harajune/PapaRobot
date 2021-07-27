#include <M5Stack.h>

#include "event/PhysicalButtonEvent.hpp"
#include "mode/ClockMode.hpp"
#include "mode/FaceMode.hpp"
#include "modes.h"

void ClockMode::setup()
{  
    Serial.println("setup Clock");
    speakClickedEvent.addListener(&ClockMode::speakClicked, this);
}

void ClockMode::loop()
{
    speakClickedEvent.listen();
}

void ClockMode::start()
{
}

void ClockMode::stop()
{

}

void ClockMode::speakClicked(PhysicalButtonEvent *event)
{
    Serial.println("clock");
    switchMode(&faceMode);
}