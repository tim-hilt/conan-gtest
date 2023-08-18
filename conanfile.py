from conan.tools.cmake import CMake, CMakeDeps, CMakeToolchain, cmake_layout

from conan import ConanFile


class conan_gtestRecipe(ConanFile):
    name = "conan-gtest"
    version = "1.0.0"
    package_type = "application"

    license = "MIT"
    author = "Tim Hilt timhilt@live.de"
    url = "https://github.com/tim-hilt/conan-gtest"
    description = "POC on how to integrate Google Test"
    topics = ("unit-testing")

    # Binary configuration
    settings = "os", "compiler", "build_type", "arch"

    # Sources are located in the same place as this recipe, copy them to the recipe
    exports_sources = "CMakeLists.txt", "src/*"

    def layout(self):
        cmake_layout(self)

    def requirements(self):
        self.requires("gtest/1.14.0")

    def generate(self):
        deps = CMakeDeps(self)
        deps.generate()
        tc = CMakeToolchain(self)
        tc.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()
