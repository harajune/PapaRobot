
#ifndef _COMMON_H_
#define _COMMON_H_

#include "mode/Mode.hpp"
#include "mode/FaceMode.hpp"
#include "mode/ClockMode.hpp"

extern Mode *mode;

extern FaceMode faceMode;
extern ClockMode clockMode;

void switchMode(Mode *mode);
void loopMode();

#endif