# Steps that lead to something useful

``` bash
conan new cmake_exe -d name=conan-gtest -d version=1.0.0
conan create . -pr conan/profile
```