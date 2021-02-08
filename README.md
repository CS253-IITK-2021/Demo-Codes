# Demo-Codes
Demo Codes for CS253A Course

## Running `gcov`

We pass flags to `gcc` or `g++` as shown below for the file we want to test coverage on. 

```bash 
$ g++ -fprofile-arcs -ftest-coverage code.cpp
```

## Running `gtest`
 
Clone the repository [googletest](https://github.com/google/googletest). 
Use [cmake] to generate `build` & `makefiles` in the cloned repository. 

```bash 
$ cmake .
```

Alternately use `cmake` to add all `dependencies`, see `CMakeLists.txt`

- [Google Test Install with `cmake`](https://github.com/google/googletest)
- [Google Test Primer](https://github.com/google/googletest/blob/master/docs/primer.md)

Running tests, see `code.cpp` file (without `cmake`)

```bash 
$ g++ code.cpp -lgtest -lgtest_main -pthread
```

