CC=gccx
CFLAGS= -g -std=c99 -pedantic -Qunused-arguments

all: format\

format: format.h format.c
        $(CC) $(CFLAGS) -o format format.c 

#Qstradd: Qstradd.c
#       $(CC) $(CFLAGS) -o Qstradd Qstradd.c

clean:
        rm format
