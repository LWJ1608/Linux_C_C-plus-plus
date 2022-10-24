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
     
    //监听
    //提取
    //读写
    //关闭

    return 0;
}
