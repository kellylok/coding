.PHONY: all clean

CC=gcc
CLIENT_CFLAGS=-w -g
INCLUDE_PATH=../include/

TARGET=test_utils

all: ${TARGET}

test_utils: test_utils.o
	${CC} $^ -o $@ ${CLIENT_LDFLAGS}

test_utils.o: test_utils.c
	${CC} -c $< -o $@ ${CLIENT_CFLAGS} -I${INCLUDE_PATH}

clean:
	rm -fr ./*.o ${TARGET}
