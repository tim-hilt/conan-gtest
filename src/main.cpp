#include "conan-gtest.h"
#include <vector>
#include <string>

int main() {
    conan_gtest();

    std::vector<std::string> vec;
    vec.push_back("test_package");

    conan_gtest_print_vector(vec);
}
