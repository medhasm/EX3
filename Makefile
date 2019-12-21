CC=gcc
AR=ar
OBJECTS_MAIN=MainQ1.o
OBJECTS_LIB=Insert.o 
FLAGS= -Wall -g

all:maini mains Stringlibary.a libary.a Insert.o MainQ1.o   main.o txtfind.o

maini: $(OBJECTS_MAIN) libary.a

	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) -L. ./libary.a
mains:main.o Stringlibary.a
	$(CC) $(FLAGS) -o maind main.o -L. ./Stringlibary.a

libary.a:$(OBJECTS_LIB)
	$(AR) -rcs libary.a $(OBJECTS_LIB)

Stringlibary.a:txtfind.o
	$(AR) -rcs Stringlibary.a txtfind.o
Insert.o:Insert.c Insert.h  
	$(CC) $(FLAGS) -c Insert.c 
MainQ1.o: MainQ1.c Insert.h  
	$(CC) $(FLAGS) -c MainQ1.c 
main.o:main.c txtfind.h
	$(CC) $(FLAGS) -c main.c
txtfind.o:txtfind.c txtfind.h
	$(CC) $(FLAGS) -c txtfind.c
.PHONY: clean all
clean:
	-rm -f *.o *.a *.so mains maini
