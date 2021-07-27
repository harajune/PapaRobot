
#ifndef _FACELIP_HPP_
#define _FACELIP_HPP_

#include <Avatar.h>

class FaceLip
{
public:
    FaceLip(m5avatar::Avatar *a);
    void lipSync();

private:
    m5avatar::Avatar *avatar;
    unsigned long timer = 0;
};

#endif