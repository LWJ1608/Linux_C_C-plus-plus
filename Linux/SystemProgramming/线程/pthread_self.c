/*
* @Author: lwj
* @Date: 2022-10-15 13:22:22
* @Mail: 2194677100@gmail.com 
* @Description:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<pthread.h>

int main(void)
{
    pthread_t tid = 0;//获取当前线程号
    tid = pthread_self();

    printf("当前线程号为%d..\n",tid);
    return 0;
}
