CC = gcc

output = bin/Zyr.exe

files = src/*.c




Zyr: $(objects)
	$(CC) -o $(output) $(files)
	rm -f src/*.o	


clean:
	rm $(output)
