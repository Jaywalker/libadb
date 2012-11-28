CC=gcc
CFLAGS = -g -w -fPIC -I. -I../../include/

SRCS= centraldir.c
SRCS+= zipfile.c

OBJS = $(SRCS:.c=.o)

all: $(OBJS)

clean:
	rm -rf $(OBJS)

