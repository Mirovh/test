INCLUDE =       -Isrc -Ilib   # include from src and library directories

CXX =           g++

CXXFLAGS =      -Wall -std=c++17 $(INCLUDE)

SOURCES =       $(shell find ./src \( -name "*.cpp" ! -name "main.cpp" \))
OBJECTS =       $(SOURCES:.cpp=.o)

TESTSRC =       $(shell find ./test -name "*.cpp")
TESTOBJ =       $(TESTSRC:.cpp=.o)

MAINSRC =       $(shell find ./src -name "main.cpp")
MAINOBJ =       $(MAINSRC:.cpp=.o)

EXEC =          BookStore
TESTEXEC =      BookStoreTest


.PHONY: test
test: CXXFLAGS += -O0 -fno-inline
test: BookStoreTest

.PHONY: install
install: CXXFLAGS += -O3
install: BookStore

.PHONY : all
all: test install

.PHONY: BookStoreTest
BookStoreTest: $(OBJECTS) $(TESTOBJ)
		$(CXX) $(CXXFLAGS) $^ -o $@.out -pthread

.PHONY: BookStore
BookStore: $(OBJECTS) $(MAINOBJ)
		$(CXX) $(CXXFLAGS) $^ -o $@.out


