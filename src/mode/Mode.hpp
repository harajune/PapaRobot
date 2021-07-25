
#ifndef _MODE_HPP_
#define _MODE_HPP_

class Mode
{
public:
    virtual ~Mode() = default;
    virtual void setup() = 0;
    virtual void loop() = 0;
};

#endif