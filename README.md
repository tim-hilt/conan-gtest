# Conan GTest

This repository hosts an example of how to use GoogleTest within a Conan- and CMake based project.

# Steps that lead to something useful

``` bash
conan new cmake_exe -d name=conan-gtest -d version=1.0.0  # Creates new conan-package
conan create . -pr conan/profile  # Runs a bunch of steps, like building and testing the package
conan install . --build=missing  # Installs dependencies
conan build . -pr conan/profile  # Build package
```

# TODOs

- [ ] Build and test in CI
- [ ] Is test-approach idiomatic?
- [ ] Learn more about constexpr
- [ ] Build new version of package (and find out how to do it cleanly with Conan)
- [ ] Find out what exactly the commands `conan create / install / build` do and how it relates to the conan-cache
- [x] Switch to Ninja
