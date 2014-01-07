CPPUTEST_HOME = /usr/local
CPPFLAGS += -I$(CPPUTEST_HOME)/include
LD_LIBRARIES = -L$(CPPUTEST_HOME)/lib -lCppUTest
OBJS = src/test_runner.o src/factorial_test.o
OPTIONS = -std=c++11
CC = clang++

.SUFFIXES: .cpp

test: src/test_runner
	$<

src/test_runner: $(OBJS)
	$(CC) -o $@ $(OBJS) -I $(CPPFLAGS) $(LD_LIBRARIES) $(OPTIONS)

.cpp.o:
	$(CC) -c $< -o $@ $(OPTIONS)

clean:
	@rm src/test_runner src/*.o

src/factorial_test.o: src/factorial.hpp
