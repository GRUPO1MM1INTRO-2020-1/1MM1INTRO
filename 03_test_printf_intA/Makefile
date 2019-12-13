EXE := test
#REF: ~/marte_2.0_22Feb2017/examples/80x86/dos/watcom/l/game/Makefile
#SRC := $(wildcard *.c -or *.adb)
SRC := $(wildcard src/disc/*.c src/dir/*.c)
#SRC := $(wildcard src/*.c)
#SRC := $(wildcard *.c)
#CC=$(which gcc)
CC=gcc
CFLAGS +=-I ./include/

default:$(EXE)

$(EXE):$(SRC)
	$(CC) $(CFLAGS) $^ -o $@
clean:
#	rm -v *.o $(EXE)
	rm -v $(EXE)

