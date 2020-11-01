.PHONY: all clear run test
CC = g++
CFLAGS = -Wall
STD_FLAG = -std=c++11
BIN_DIR = ./bin/
SRC_DIR = ./src/
BUILD_DIR = ./build/
EXECUTABLE = app

all: $(BIN_DIR)$(EXECUTABLE) $(BIN_DIR)$(EXECUTABLE_TEST)

$(BIN_DIR)$(EXECUTABLE): $(BUILD_DIR)main.o $(BUILD_DIR)sorts.o $(BUILD_DIR)processing.o
	$(CC) $(CFLAGS) $(BUILD_DIR)main.o $(BUILD_DIR)sorts.o $(BUILD_DIR)processing.o -o $(BIN_DIR)$(EXECUTABLE)
$(BUILD_DIR)main.o: $(SRC_DIR)main.cpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)main.cpp -o $(BUILD_DIR)main.o $(STD_FLAG) 
$(BUILD_DIR)sorts.o: $(SRC_DIR)sorts.cpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)sorts.cpp -o $(BUILD_DIR)sorts.o $(STD_FLAG) 
$(BUILD_DIR)processing.o: $(SRC_DIR)processing.cpp
	$(CC) $(CFLAGS) -c $(SRC_DIR)processing.cpp -o $(BUILD_DIR)processing.o $(STD_FLAG) 


	
run: 
	$(BIN_DIR)$(EXECUTABLE)

clear: 
	rm -rf $(BUILD_DIR)*.o $(BIN_DIR)$(EXECUTABLE)