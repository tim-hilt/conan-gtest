# Steps that lead to something useful

``` bash
conan new cmake_exe -d name=conan-gtest -d version=1.0.0
conan create . -pr conan/profile
conan install . --build=missing
conan build . -pr conan/profile
```

# TODOs

- [ ] Build and test in CI
- [ ] Is test-approach idiomatic?
- [ ] Learn more about constexpr
- [ ] Build new version of package (and find out how to do it cleanly with Conan)
- [x] Switch to Ninja
