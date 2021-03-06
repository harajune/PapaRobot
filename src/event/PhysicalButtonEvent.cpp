
#include <M5Stack.h>

#include "PhysicalButtonEvent.hpp"

PhysicalButtonEvent::PhysicalButtonEvent(Button *button)
{
    this->button = button;
}

void PhysicalButtonEvent::listen()
{
    button->read();
    if (button->wasPressed())
    {
        for (auto listener : listeners)
        {
            listener(this);
        }
    }
}
