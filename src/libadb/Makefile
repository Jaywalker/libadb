CC=gcc
CFLAGS = -g -w -I. -I../../include/ -DADB_HOST=1 -DHAVE_FORKEXEC=1 -DHAVE_SYMLINKS -DHAVE_TERMIO_H 

SRCS= adb.c
SRCS+= adb_auth_host.c
SRCS+= adb_client.c
SRCS+= commandline.c
SRCS+= console.c
SRCS+= file_sync_client.c
SRCS+= fdevent.c
SRCS+= get_my_path_linux.c
SRCS+= services.c
SRCS+= sockets.c
SRCS+= transport.c
SRCS+= transport_local.c
SRCS+= transport_usb.c
SRCS+= usb_linux.c
SRCS+= usb_vendors.c
SRCS+= utils.c

OBJS = $(SRCS:.c=.o)

all: $(OBJS)

clean:
	rm -rf $(OBJS)

