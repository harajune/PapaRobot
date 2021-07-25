
#ifndef _PHYSICAL_BUTTON_EVENT_HPP_
#define _PHYSICAL_BUTTON_EVENT_HPP_

#include <M5Stack.h>
#include <functional>

#include "event/Event.hpp"

class PhysicalButtonEvent : public Event<void(PhysicalButtonEvent*)>
{
public:
    PhysicalButtonEvent(Button *button);
    ~PhysicalButtonEvent();
    virtual void listen() override;

private:
    Button *button;
};
#endif