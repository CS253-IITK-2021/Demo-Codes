# Demo-Codes

Demo Codes for CS253A Course

# Demo for `gcov` tool

This demo needs [`g++`](https://gcc.gnu.org/) installed in your system.
We pass flags to `gcc` or `g++` as shown below for the file we want to test coverage on. 

See the code in [`coverage.cpp`](coverage/coverage.cpp) file for more information. 

```bash 
$ g++ -fprofile-arcs -ftest-coverage coverage/coverage.cpp -o coverage
```

Running the binary produced. 

```bash
$ ./coverage 
<num1> 
<num2>
```

or 

```bash 
echo -30 -55 | ./coverage
```

Run with more example inputs, `fuzz` it for better `coverage`. 

## Using `gcov`

Use the `gcov` tool with required `flags` for more information. 

```
$ gcov -b -c coverage
```

## Output 

Check the file `*.gcov` produced. 

```bash
File 'cov/coverage.cpp'
Lines executed:100.00% of 11ma
Branches executed:100.00% of 26
Taken at least once:61.54% of 26
Calls executed:100.00% of 10
Creating 'coverage.cpp.gcov'

File '/usr/include/c++/9/iostream'
No executable lines
No branches
No calls
Removing 'iostream.gcov'
```

## Makefile `gcov` example

See the file in [`Makefile`](coverage/Makefile) for more information. 

```bash
$ make all
$ make cov1
$ make cov2
```

Clean up 

```bash
$ make clean 
```

# Installing `googletest`
 
You need to clone & install `googletest` from `GitHub`. 
This installation needs [`cmake`](https://cmake.org/install/) & `make`.

- Clone the repository [googletest](https://github.com/google/googletest). 
- Use [cmake] to generate `build` & `makefiles` in the cloned repository. 

```bash 
$ cmake .
$ make -j 12
```

Alternately use `cmake` to add all `dependencies`, see [`CMakeLists.txt`](CMakeLists.txt)

- [Google Test Install with `cmake`](https://github.com/google/googletest)
- [Google Test Primer](https://github.com/google/googletest/blob/master/docs/primer.md)

# Running `gtests` without `cmake`

You can install `googletest` framework as described above and then run `custom` tests using `g++/gcc` directly without `cmake`. 
We show the run of a sample file [`example1.cpp`](src/example1)

```bash 
$ g++ src/example1.cpp -lgtest -lgtest_main -pthread
$ ./example1
```

# Running `gtests` with `cmake`

Make a `build` directory and from that `build` directory, run the following commands
Here `cmake` automatically downloads `googletest` repository and builds it as a dependency for your `cmake` project. 

Using `ninja` build. 

```bash 
$  cmake .. -G "Ninja"
$ ninja all
$ ./example1
```

With `make`. 

```bash 
$  cmake .. 
$ make -j $(nproc)
$ ./example1
```