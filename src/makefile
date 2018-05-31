
vpath %.h include
vpath %.cpp src

COMPILER := g++

PROGRAM := new

all: $(PROGRAM)

$(PROGRAM): main.o
	$(COMPILER) -o $@ $^

main.o: main.cpp
	$(COMPILER) -c -o $@ $^

clean:
	rm -rf *.o $(PROGRAM)
