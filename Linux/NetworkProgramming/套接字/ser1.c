/*
 * @Author: lwj
 * @Date: 2022-10-23 20:23:37
 * @Mail: 2194677100@gmail.com
 * @Description:
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <string.h>

int main(void)
{
    //创建套接字
    int lfd = socket(AF_INET, SOCK_STREAM, 0);
    //绑定
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;//IP地址协议
    addr.sin_port = htons(8000);//服务器端口号
    inet_ptop(AF_INET,"192.168.43.128",addr.sin_addr.s_addr);
    
    int ret = bind(lfd,(struct sockaddr *)&addr,sizeof(addr));
    if(ret < 0)
    {
        perror("");
        exit(0);
    }
    //监听
    lisent(lfd,128);
    //提取
    struct sockaddr_in ciladdr;//创建新的套接字
    socklen_t len = sizeof(ciladdr);
    int cfd = accept(lfd,(struct sockaddr*)&ciladdr,&len);
    char ip[16]="";
    printf("new client ip=%s, port=%d\n",inet_ntop(AF_INET,&cliaddr.sin_addr.s_addr,ip,16));
    //读写

    //关闭

    return 0;
}
