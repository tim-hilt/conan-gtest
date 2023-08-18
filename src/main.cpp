#include "do-stuff.hpp"

int main()
{
    DoStuff instance{};
    instance.initPeripherals();
    instance.initEthernet();
}
