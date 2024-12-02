
TARGET= program

OBJ= f1.o f2.o

all:	$(TARGET)

$(TARGET): $(OBJ) 
	gcc $(OBJ) -o $(TARGET)
f1.o: f1.c
	gcc -c f1.c -o f1.o
f2.o: f2.c
	gcc -c f2.c -o f2.o
clean:
		rm -rf $(OBJ) $(TARGET)
