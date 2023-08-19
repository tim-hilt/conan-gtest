find_package(
    GTest REQUIRED
    COMPONENTS gtest_main)

include(GoogleTest)

add_executable(unit-tests test.cpp ../src/do-stuff.cpp)

target_include_directories(unit-tests PRIVATE ../src/)

target_link_libraries(unit-tests PRIVATE GTest::gtest_main)

gtest_discover_tests(unit-tests)
