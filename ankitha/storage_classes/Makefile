# Compiler
CC = gcc

# Executable name
TARGET = f1

# Object files
OBJ = f1.o f2.o

# Default target to build the executable
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# Compile f1.c into f1.o
f1.o: f1.c
	$(CC) -c f1.c -o f1.o

# Compile f2.c into f2.o
f2.o: f2.c
	$(CC) -c f2.c -o f2.o

# Clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)

