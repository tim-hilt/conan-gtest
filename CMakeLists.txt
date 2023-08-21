cmake_minimum_required(VERSION 3.15)
project(conan-gtest CXX)

add_executable(conan-gtest src/main.cpp src/do-stuff.cpp)

enable_testing()

if (NOT BUILD_TESTING STREQUAL OFF)
        add_subdirectory(test)
endif()

install(TARGETS conan-gtest DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib)
