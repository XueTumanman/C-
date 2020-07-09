#include <stdio.h>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <iostream>

const int PORT_SERV = 6012;

static void udpclie_echo(int s, struct sockaddr *to)
{
    char buff[10] = "UDP TEST";
    struct sockaddr_in from;
    socklen_t len = sizeof(*to);

    sendto(s, buff, 256, 0, to, len);
    recvfrom(s, buff, 256, 0, (struct sockaddr *)&from, &len);

    printf("recved:%s\n", buff);
}

int main(int argc, char const *argv[])
{

    int s;

    struct sockaddr_in addr_serv;

    s = socket(AF_INET, SOCK_DGRAM, 0);

    memset(&addr_serv, 0, sizeof(addr_serv));
    addr_serv.sin_family = AF_INET;
    // addr_serv.sin_addr.S_un.S_addr = inet_addr("192.168.1.110");
    addr_serv.sin_addr.s_addr = inet_addr("192.168.1.110");

    addr_serv.sin_port = htons(PORT_SERV);

    udpclie_echo(s, (struct sockaddr *)&addr_serv);

    close(s);

    return 0;
}
