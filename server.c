/*
 * project:       tftp server program
 * author:        Oscar Sanchez (oms1005@gmail.com)
 * description:   a small tftp (trivial ftp) server program
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdarg.h>
#include <assert.h>
#include <fcntl.h>
#include "header.h"
#include "checksum.h"

#define BACKLOG 10     // how many pending connections queue will hold


void sigchld_handler(int s)
{
}

// get sockaddr, IPv4 or IPv6:
void *get_in_addr(struct sockaddr *sa)
{
 
}

int main(int argc, char**argv)
{

  
 
    
    return 0;
}
