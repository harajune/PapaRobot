#include <M5Stack.h>

#include "event/PhysicalButtonEvent.hpp"
#include "mode/FaceMode.hpp"
#include "mode/ClockMode.hpp"
#include "tts/AquesTalkTTS.h"
#include "modes.h"
#include "credentials.h"

void FaceMode::setup()
{
    TTS.createK(AQUESTALK_KEY);

    speakClickedEvent.addListener(&FaceMode::speakClicked, this);
}

void FaceMode::loop()
{
    speakClickedEvent.listen();
    lip.lipSync();
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
    TTS.playK("じゅりちゃんはおなかすいてますか？", 80);
}