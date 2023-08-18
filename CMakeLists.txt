cmake_minimum_required(VERSION 3.15)
project(conan-gtest CXX)

add_executable(conan-gtest src/main.cpp src/do-stuff.cpp)

# TODO: Is there a better approach to testing in C++?
find_package(GTest REQUIRED)
add_executable(test test/test.cpp src/do-stuff.cpp)
target_include_directories(test PRIVATE src/)
target_link_libraries(test GTest::gtest_main)

install(TARGETS conan-gtest DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib)
