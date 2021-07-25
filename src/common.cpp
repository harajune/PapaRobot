
#include "common.h"

#include "mode/Mode.hpp"

Mode *mode = nullptr;

void switchMode(Mode *nextMode)
{
    if (mode != nullptr)
    {
        delete mode;
    }
    mode = nextMode;
    mode->setup();
}