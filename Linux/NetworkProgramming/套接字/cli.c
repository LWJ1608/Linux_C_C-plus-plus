/*
 * @Author: lwj
 * @Date: 2022-10-23 15:29:11
 * @Mail: 2194677100@gmail.com
 * @Description:
 */
#include <stdio.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>
int main(void)
{

    //创建一个套接字
    int sock_fd;
    sock_fd = socket(AF_INET, SOCK_STREAM, 0);
    //连接服务器
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(8080);
    inet_pton(AF_INET, "192.168.43.128", &addr.sin_addr.s_addr);
    connect(sock_fd, (struct sockaddr *)&addr, sizeof(addr));
    //读写数据
    char buf[1024] = "";
    while (1)
    {
        int n = read(STDIN_FILENO, buf, sizeof(buf));
        write(sock_fd, buf, n); //发送给服务器
        n = read(sock_fd, buf, sizeof(buf));
        write(STDOUT_FILENO, buf, n);
    }
    //关闭
    cloce(sock_fd);

    return 0;
}
