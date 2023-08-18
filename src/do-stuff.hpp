#pragma once

#include <stdint.h>

class DoStuff
{
public:
    DoStuff();

    uint8_t initPeripherals() const;

#ifdef CAPABILITY_ETHERNET
    void initEthernet() const;
#endif
};