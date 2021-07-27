#include <M5Stack.h>

#include "modes.h"

#include "mode/Mode.hpp"
#include "mode/FaceMode.hpp"
#include "mode/ClockMode.hpp"

Mode *mode = nullptr;

void switchMode(Mode *m)
{ 
    if (mode != nullptr)
    {
        mode->stop();
    }

    mode = m;
    mode->start();
}