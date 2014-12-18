CC = g++
CFLAGS = -Wall -std=c++0x
LFLAGS = -I/home/yilin/software/metis-5.1.0/libs/include -L/home/yilin/software/metis-5.1.0/libs/lib -lmetis -lGKlib /home/yilin/software/metis-5.1.0/libs/lib/libmetis.a /home/yilin/software/metis-5.1.0/libs/lib/libGKlib.a -lm

all: convert kway

convert:
	$(CC) $(CFLAGS) main.cpp convert_input.cpp -o convert
kway:
	gcc -Ilibs/include -Llibs/lib -lmetis -lGKlib  programs/gpmetis.c programs/cmdline_gpmetis.c programs/io.c programs/stat.c libs/lib/libmetis.a libs/lib/libGKlib.a -lm -o kway

