CXX=g++
CXX_FLAGS=-Wall -g -fprofile-arcs -ftest-coverage


all: fuzz1 fuzz2

cov_example1: coverage.cpp
	@mkdir -p bin/
	${CXX} ${CXX_FLAGS} coverage.cpp -o bin/coverage

cov_example2: infeasible.cpp
	@mkdir -p bin/
	${CXX} ${CXX_FLAGS} infeasible.cpp -o bin/infeasible

fuzz1: cov_example1
	bin/coverage < inputs/test1.in
	bin/coverage < inputs/test2.in
	bin/coverage < inputs/test3.in
	bin/coverage < inputs/test4.in

fuzz2: cov_example2
	bin/infeasible < inputs/test1.in
	bin/infeasible < inputs/test2.in
	bin/infeasible < inputs/test3.in
	bin/infeasible < inputs/test4.in

cov1: fuzz1
	gcov -b -c coverage.cpp

cov2: fuzz2
	gcov -b -c infeasible.cpp

clean: 
	rm -rf bin
	rm -rf *.gcov *.gcno *.gcda *.bb *.gcbb