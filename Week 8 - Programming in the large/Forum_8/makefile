#makefile for generating L08a.out

CC = gcc
CFLAGS = -Wall -Werror -ansi -lm

L08a.out: L08a_dev0.o L08planet_dev1.o L08planet_dev2.o
	$(CC) $(CFLAGS) -o L08a.out L08a_dev0.o L08planet_dev1.o L08planet_dev2.o 

L08a_dev0.o: L08a_dev0.c L08planet.h 
	$(CC) $(CFLAGS) -c  -o L08a_dev0.o L08a_dev0.c

L08planet_dev1.o: L08planet_dev1.c L08planet.h
	$(CC) $(CFLAGS) -c  -o L08planet_dev1.o L08planet_dev1.c

L08planet_dev2.o: L08planet_dev2.c L08planet.h
	$(CC) $(CFLAGS) -c  -o L08planet_dev2.o L08planet_dev2.c

clean:
	rm L08a_dev0.o L08planet_dev1.o L08planet_dev2.o L08a.out
