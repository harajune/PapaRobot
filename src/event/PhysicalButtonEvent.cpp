
#include <M5Stack.h>

#include "PhysicalButtonEvent.hpp"

PhysicalButtonEvent::PhysicalButtonEvent(Button *button)
{
    this->button = button;
}

// suppress warning
PhysicalButtonEvent::~PhysicalButtonEvent() {
}

void PhysicalButtonEvent::listen()
{
    button->read();
    if (button->isPressed())
    {
        for (auto listener : listeners)
        {
            listener(this);
        }
    }
}
