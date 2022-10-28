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



int main(int argc,char* argv)
{
    if(argc <= 2)
    {
        printf("usage:%s ip_address port_number\n",argv[0]);
        return 1;
    }
    const char* ip = argv[1];//服务器ip地址
    int port = argv[2];//端口号
    struct sockaddr_in address;
    bzero(&address,sizeof(address));
    address.sin_family = AF_INET;
    address.sin_port = htons(port);
    inet_pton(AF_INET,ip,&address.sin_addr);

    //创建套接字
    int listenfd = socket(AF_INET,SOCK_STREAM,0);
    assert(listenfd >=0 );
    //绑定
    int ret = bind(lisentfd,(struct sockaddr*)&address,sizof(address));
    assert(ret != -1);
    //监听
    ret = listen();
    //while
}
