C = g++
CPPFLAGS = -c -Wall
LDFLAGS = -lcppunit -lm
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/
all: test1.cpp

$(OBJ)test1.o: $(SRC)test1.cpp
        $(CC) $(CPPFLAGS) $(SRC)test1.cpp -I $(INCLUDE)
		mv test1.o $(OBJ)

$(OBJ)test0.o: $(SRC)test0.cpp
        $(CC) $(CPPFLAGS) $(SRC)test0.cpp -I $(INCLUDE)
		mv test0.o $(OBJ)

clean:
    @echo "cleaning the project"
    rm -f a.out cpp *.o
    rm -f $(OBJ)*.o
    rm -f $(BIN)cpp
