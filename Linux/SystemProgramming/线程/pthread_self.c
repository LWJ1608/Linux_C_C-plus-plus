/*
* @Author: lwj
* @Date: 2022-10-15 13:22:22
* @Mail: 2194677100@gmail.com 
* @Description: 使用pthread_self函数可以获取当前线程号
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<pthread.h>
//编译时需要链接线程库 --  -pthread 
int main(void)
{
    pthread_t tid = 0;//获取当前线程号
    tid = pthread_self();

    printf("当前线程号为:%lu..\n",tid);
    return 0;
}
