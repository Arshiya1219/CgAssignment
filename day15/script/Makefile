CC = g++
CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
INC = inc
SRC = src
OBJ = obj
BIN = bin
IFLAGS = -I$(INC)/

all: app

app: $(OBJ)/multi.o $(OBJ)/a1.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/multi.o $(OBJ)/a1.o


$(OBJ)/multi.o: $(SRC)/multi.cpp
	$(CC) $(CFLAGS) $(SRC)/multi.cpp $(IFLAGS)
	mv *.o $(OBJ)/

$(OBJ)/a1.o: $(SRC)/a1.cpp
	$(CC) $(CFLAGS) $(SRC)/a1.cpp $(IFLAGS)
	mv *.o $(OBJ)/

clean:
	rm -f a.out app
	rm -f $(OBJ)/*.o
	rm -f $(BIN)/app
	@echo "Cleaning Done!"

