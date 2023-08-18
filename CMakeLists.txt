cmake_minimum_required(VERSION 3.15)
project(conan-gtest CXX)



add_executable(conan-gtest src/conan-gtest.cpp src/main.cpp)



install(TARGETS conan-gtest DESTINATION "."
        RUNTIME DESTINATION bin
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        )
