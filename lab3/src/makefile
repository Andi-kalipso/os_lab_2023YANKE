CC=gcc
CFLAGS=-I.
.PHONY : all sequential_min_max parallel_min_max clean myexec

all : sequential_min_max parallel_min_max myexec

sequential_min_max : utils.o find_min_max.o utils.h find_min_max.h
    $(CC) -o sequential_min_max find_min_max.o utils.o sequential_min_max.c $(CFLAGS)

parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
    $(CC) -o parallel_min_max utils.o find_min_max.o parallel_min_max.c $(CFLAGS)

utils.o : utils.h
    $(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max.o : utils.h find_min_max.h
    $(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)

myexec :
    $(CC) $(CFLAGS)  myexec.c -o myexec 

clean :
    rm -f utils.o find_min_max.o sequential_min_max parallel_min_max myexec
