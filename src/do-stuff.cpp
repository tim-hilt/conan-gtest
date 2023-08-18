#include <iostream>

#include "do-stuff.hpp"

DoStuff::DoStuff()
{
}

uint8_t DoStuff::initPeripherals() const
{
    return 0;
}

#ifdef CAPABILITY_ETHERNET
void DoStuff::initEthernet() const
{
    std::cout << "doing ethernet stuff\n";
}
#endif