/*
* @Author: lwj
* @Date: 2022-10-25 14:26:51
* @Mail: 2194677100@gmail.com 
* @Description:select()
*/

#include<stdio.h>
#include<sys/select.h>
#include<sys/types.h>
#include<unistd.h>
#include"wrap.h"
#include<sys/time.h>

#define PORT 8888
int main(void)
{ 
    //创建套接字，绑定
    int lfd = tcp4bind(PORT,NULL);
    //监听
    Listen(lfd,128);
    int maxfd = lfd;//最大文件描述符
    fd_set oldset, rset;//文件描述符集合

    FD_ZERO(&oldset);
    FD_ZERO(&rset);
    FD_SET(lfd,&oldset);//将lfd放到oldset集合中
    //while
    while(1)
    {
       rset = oldset;//把oldset赋值给需要监听的rset
        
       int n = select(maxfd+1,&rset,NULL,NULL,NULL);
       if(n < 0)
       {
           perror("");
           break;
       }
       else if(n == 0)
       {
            continue;//没有发生变化，继续监听
       }
       else //监听到文件描述符发生变化
       {
           struct sockaddr_in cliaddr;
           socklen_t len = sizeof(cliaddr);
           char ip[16] = "";
           //提取新的连接
           int cfd = Accept(lfd,(struct sockaddr*)&cliaddr,&len);
           //输出客户端的信息
           printf("new client ip=%s port=%d\n",inet_ntop(AF_INET,&cliaddr.sin_addr.s_addr,ip,16),
                   ntohs(cliaddr.sin_port));
       }

        
        //select 监听 
    }

    return 0;
}
