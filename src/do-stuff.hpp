#pragma once

class DoStuff
{
public:
    DoStuff();

    void initPeripherals();

#ifdef CAPABILITY_ETHERNET
    void initEthernet();
#endif
};