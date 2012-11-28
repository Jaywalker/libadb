CC=gcc
CFLAGS = -g -w -I. -I../../include/

SRCS= abort_socket.c
SRCS+= list.c
SRCS+= load_file.c
SRCS+= socket_inaddr_any_server.c
SRCS+= socket_local_client.c
SRCS+= socket_local_server.c
SRCS+= socket_loopback_client.c
SRCS+= socket_loopback_server.c
SRCS+= socket_network_client.c

OBJS = $(SRCS:.c=.o)

all: $(OBJS)

clean:
	rm -rf $(OBJS)

