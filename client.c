/*
 * project:       tftp client program
 * author:        Oscar Sanchez (oms1005@gmail.com)
 * description:   a small tftp (trivial ftp) client program
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <netdb.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdarg.h>
#include <getopt.h>
#include <fcntl.h>
#include <assert.h>
#include <sys/select.h>
#include <sys/uio.h>
#include <strings.h>
#include <sys/stat.h>
#include "header.h"
#include "checksum.h"

#define RETRY 10

int recvfromTimeOut(int socket, long sec, long usec)
{
	
}

/* Returns the recv message */
int tftp(int sockfd, const void * packet, int expected_seqnum, int timeout, int flag ) {
	
}

int main(int argc, char *argv[])
{
	
    return 0;
}
