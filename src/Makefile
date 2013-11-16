fio.o: fio.hpp # for now
	g++ fio.cpp

command.o: command.hpp fio.o # for now
	g++ command.cpp

proton.o: fio.o command.o # for now
	g++ proton.cpp

OBJECTS = proton.o fio.o command.o

proton: $(OBJECTS)
	g++ -o $(OBJECTS)

clean:
	rm -rf *.o

all: proton clean
