CC = g++
CFLAGS = -Wall -std=c++0x

all: split kway

split:
	$(CC) $(CFLAGS) main.cpp convert_input.cpp -o split
kway:
	gcc -Imetis/libs/include -Lmetis/libs/lib -lmetis -lGKlib  metis/programs/gpmetis.c metis/programs/cmdline_gpmetis.c metis/programs/io.c metis/programs/stat.c metis/libs/lib/libmetis.a metis/libs/lib/libGKlib.a -lm -o kway
clean:
	rm split kway
