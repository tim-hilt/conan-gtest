#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define CONAN_GTEST_EXPORT __declspec(dllexport)
#else
  #define CONAN_GTEST_EXPORT
#endif

CONAN_GTEST_EXPORT void conan_gtest();
CONAN_GTEST_EXPORT void conan_gtest_print_vector(const std::vector<std::string> &strings);
