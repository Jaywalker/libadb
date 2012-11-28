CC=gcc
CFLAGS = -g -w -I. -I../../include/zlib

SRCS= adler32.c
SRCS+= compress.c
SRCS+= crc32.c
SRCS+= deflate.c
SRCS+= infback.c
SRCS+= inffast.c
SRCS+= inflate.c
SRCS+= inftrees.c
SRCS+= trees.c
SRCS+= uncompr.c
SRCS+= zutil.c

OBJS = $(SRCS:.c=.o)

all: $(OBJS)

clean:
	rm -rf $(OBJS)

