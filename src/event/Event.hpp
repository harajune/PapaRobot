#ifndef _EVENT_HPP_
#define _EVENT_HPP_

#include <vector>
#include <functional>

template <typename T>
class Event
{
public:
    // implement the trigger for event listener
    virtual void listen() = 0;

    template <typename F>    
    void addListener(F listenerFunction) {
        std::function<T> f = listenerFunction;
        listeners.push_back(f);
    };

    template <typename F, class C>    
    void addListener(F listenerFunction, C *object) {
        std::function<T> f = std::bind(listenerFunction, std::ref(*object), std::placeholders::_1);
        listeners.push_back(f);
    };

protected:
    std::vector<std::function<T>> listeners;
};

#endif