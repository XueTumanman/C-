#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>

// 服务器端口
#define PORT_SERV 8888
// 缓冲区大小
#define BUFF_LEN 256

void static udpserv_echo(int s, struct sockaddr *client)
{
    int n;               // 接收数据长度
    char buff[BUFF_LEN]; // 收发缓冲区
    socklen_t len;       // 地址长度

    // 循环等待
    while (1)
    {
        len = sizeof(*client);
        // 接收数据放到 buff 中，并获得客户端地址
        n = recvfrom(s, buff, BUFF_LEN, 0, client, &len);
        *buff+=1;
        // 将接受到的 n 个字节发送回客户端
        sendto(s, buff, n, 0, client, len);
    }
}

int main(int argc, char const *argv[])
{
    // 套接字描述符
    int s;

    // 地址结构
    struct sockaddr_in addr_serv, addr_clie;

    // 建立数据报套接字
    s = socket(AF_INET, SOCK_DGRAM, 0);

    // 清空地址结构
    memset(&addr_serv, 0, sizeof(addr_serv));
    addr_serv.sin_family = AF_INET;                // 设置地址类型
    addr_serv.sin_addr.s_addr = htonl(INADDR_ANY); // 任意本地地址
    addr_serv.sin_port = htons(PORT_SERV);         // 服务器端口

    // 绑定地址
    bind(s, (struct sockaddr *)&addr_serv, sizeof(addr_serv));

    // 回显处理程序
    udpserv_echo(s, (struct sockaddr *)&addr_clie);

    return 0;
}
