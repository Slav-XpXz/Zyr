CC = gcc

output = bin/Zyr.exe
objects := $(patsubst %.c,%.o,$(wildcard src/*.c))




Zyr: $(objects)
	echo "Linking Object Files and generating binary."
	$(CC) -o $(output) $(objects)
	rm -f src/*.o	


clean:
	rm $(output)