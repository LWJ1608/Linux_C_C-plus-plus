/*
* @Author: lwj
* @Date: 2022-10-15 14:58:39
* @Mail: 2194677100@gmail.com 
* @Description: 线程退出函数pthread_exit
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<pthread.h>

//线程退出不能用exit()函数，exit()用于进程退出
//线程退出需要用pthread_exit()函数
void* fun(void* arg)
{
    int i = 0;
    for(i = 0;i < 5; i++)
    {
        printf("thread is running ...%d\n",i);
        sleep(1);
    }
    //return (void*)0x3;
    pthread_exit(NULL);    
}

int main(void)
{
    int red = -1;
    void* tmp = NULL;
    pthread_t tid = -1;
    red =pthread_create(&tid,NULL,fun,NULL);
    if(red != 0)
    {
        printf("thread creates false!\n");
        return 1;
    }
    printf("main is runing ....\n");

    //主线程等待子线程（回收线程资源），阻塞
    red = -1;
    red  = pthread_join(tid,&tmp);
    if(red != 0)
    {
        printf("pthread_join false!");
    }
    printf("tmp:%d\n",tmp);
    printf("main thread exit....\n");

    return 0;
}
