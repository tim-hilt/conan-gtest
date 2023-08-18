cmake_minimum_required(VERSION 3.15)
project(conan-gtest CXX)

add_compile_definitions(CAPABILITY_ETHERNET)

add_executable(conan-gtest src/main.cpp src/do-stuff.cpp)

find_package(GTest REQUIRED)
add_executable(test test/test.cpp)
target_include_directories(test PRIVATE src/)
target_link_libraries(test gtest::gtest)

install(TARGETS conan-gtest DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib)
