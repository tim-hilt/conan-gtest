#include <gtest/gtest.h>

#include "do-stuff.hpp"

// TODO: Learn about constexpr

TEST(DoStuff, InitPeripheralsReturnsNoError)
{
    // GIVEN
    const DoStuff instance{};
    const uint8_t expectedValue{0};

    // WHEN
    const uint8_t actualValue{instance.initPeripherals()};

    // THEN
    ASSERT_EQ(expectedValue, actualValue);
}
