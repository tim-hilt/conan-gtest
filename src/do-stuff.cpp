#include <iostream>

#include "do-stuff.hpp"

DoStuff::DoStuff()
{
    std::cout << "constructor\n";
}

void DoStuff::initPeripherals()
{
    std::cout << "init peripherals\n";
}

#ifdef CAPABILITY_ETHERNET
void DoStuff::initEthernet()
{
    std::cout << "doing ethernet stuff\n";
}
#endif