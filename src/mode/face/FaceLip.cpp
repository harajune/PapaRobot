#include <Avatar.h>
#include <tts/AquesTalkTTS.h>

#include "FaceLip.hpp"

FaceLip::FaceLip(m5avatar::Avatar *a)
{
    avatar = a;
}

void FaceLip::lipSync()
{
    if (millis() - timer > 30)
    {
        int level = TTS.getLevel();
        float f = level / 12000.0;
        float open = min(1.0, f);
        avatar->setMouthOpenRatio(open);
        timer = millis();
    }
}