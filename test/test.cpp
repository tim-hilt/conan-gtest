#include <gtest/gtest.h>

TEST(MyTestSuite, Test1)
{
    ASSERT_EQ(2 + 2, 4);
}

int main(int argc, char **argv)
{
    // Initialize GoogleTest
    ::testing::InitGoogleTest(&argc, argv);

    // Run all tests
    return RUN_ALL_TESTS();
}