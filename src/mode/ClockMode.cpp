#include <M5Stack.h>

#include "event/PhysicalButtonEvent.hpp"
#include "mode/ClockMode.hpp"
#include "mode/FaceMode.hpp"
#include "common.h"

void ClockMode::setup() {
    speakClickedEvent.addListener(&ClockMode::speakClicked, this);
}

void ClockMode::loop() {
    speakClickedEvent.listen();
}

void ClockMode::speakClicked(PhysicalButtonEvent *event) {
    Serial.println("clock");
    switchMode(new FaceMode());
}