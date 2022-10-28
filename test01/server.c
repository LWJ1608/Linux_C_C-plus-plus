/*
 * @Author: lwj
 * @Date: 2022-10-28 15:14:50
 * @FilePath: /Linux_C_C-plus-plus/test01/server.c
 * @Description:
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>
#include <poll.h>

#define BUFFER_SIZE 64
#define FD_LIMIT 65535
#define USER_LIMIT 5
#define POLLRDHUP 0x2000

struct client_data
{
    struct sockaddr_in address;
    char *write_buf;
    char buf[BUFFER_SIZE];
};
int setnonblocking(int fd)
{
    int old_option = fcntl(fd, F_GETFL);
    int new_option = old_option | O_NONBLOCK;
    fcntl(fd, F_SETFL, new_option);
    return old_option;
}
int main(int argc, char *argv[])
{
    if (argc <= 2)
    {
        printf("usage:%s ip_address port_number\n", argv[0]);
        return 1;
    }

    const char *ip = argv[1]; //服务器ip地址
    int port = atoi(argv[2]); //端口号
    struct sockaddr_in address;
    bzero(&address, sizeof(address));
    address.sin_family = AF_INET;
    address.sin_port = htons(port);
    inet_pton(AF_INET, ip, &address.sin_addr);

    //创建套接字
    int listenfd = socket(AF_INET, SOCK_STREAM, 0);
    assert(listenfd >= 0);
    //绑定
    int ret;
    ret = bind(listenfd, (struct sockaddr *)&address, sizeof(address));
    assert(ret != -1);
    //监听
    ret = listen(listenfd, 5);
    assert(ret != -1);
    struct client_data *users = (struct client_data *)malloc(sizeof(struct client_data) * FD_LIMIT);

    struct pollfd fds[USER_LIMIT + 1];
    int i;
    for (i = 0; i < USER_LIMIT; i++)
    {
        fds[i].fd = -1;
        fds[i].events = 0;
    }
    fds[0].fd = listenfd;
    fds[0].events = POLLIN | POLLERR;
    fds[0].revents = 0;

    int user_counter = 0;
    // while
    while (1)
    {
        //创建poll
        ret = poll(fds, user_counter + 1, -1);
        if (ret < 0)
        {
            printf("poll failure\n");
            break;
        }
        for (i = 0; i < user_counter + 1; i++)
        {
            //主socket文件描述符有变化
            if ((fds[i].fd == listenfd && fds[i].revents & POLLIN))
            {
                struct sockaddr_in client_address;
                //提取新的连接
                int cfd = accept(listenfd, (struct sockaddr *)&client_address, sizeof(client_address));
                if (cfd < 0)
                {
                    printf("errno is:%d\n", errno);
                    continue;
                }
                if (user_counter >= USER_LIMIT) //客户端连接过多
                {
                    const char *info = "too many users\n";
                    printf("%s", info);
                    send(cfd, info, strlen(info), 0);
                    close(cfd);
                    continue;
                }
                user_counter++; //客户连接个数加一
                users[cfd].address = client_address;
                setnonblocking(cfd);
                fds[user_counter].fd = cfd;
                fds[user_counter].events = POLLIN | POLLERR | POLLRDHUP;
                fds[user_counter].revents = 0;
                printf("comes a new user, now have %d users\n", user_counter);
            }
            else if (fds[i].revents & POLLERR) //文件描述符出现错误
            {
                printf("get a error from %d\n", fds[i].fd);
                char errors[100];
                memset(errors, '\0', 100);
                socklen_t length = sizeof(errors);
                if (getsockopt(fds[i].fd, SOL_SOCKET, SO_ERROR, &errors, &length) < 0)
                {
                    printf("get socket option failed\n");
                }
                continue;
            }
            else if (fds[i].revents & POLLRDHUP)
            {
                users[fds[i].fd] = users[fds[user_counter].fd];
                close(fds[i].fd);
                fds[i] = fds[user_counter];
                i--;
                user_counter--;
                printf("a client left\n");
            }
            else if (fds[i].events & POLLIN)
            {
                int cfd = fds[i].fd;
                memset(users[cfd].buf)
            }
        }
    }
