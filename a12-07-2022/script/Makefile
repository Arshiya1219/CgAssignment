CC == g++
INC = ../inc
OBJ = ../obj
SRC = ../src
BIN = ../bin

CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
IFLAGS = -I$(INC)

all: employ

employ: $(OBJ)/employ.o
              $(CC) $(LFLAG) $(BIN)/employ $(OBJ)/employ.o

$(OBJ)employ.o: $(SRC)/employ.cpp
        $(CC) $(CFLAGS) $(IFLAGS) $(SRC)/employ.cpp -o $(OBJ)/employ.cpp
        mv *.o $(OBJ)




clean:
    @echo "Cleaning the Project"
	rm -f a.out employ
	rm -f a.out
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/employ
