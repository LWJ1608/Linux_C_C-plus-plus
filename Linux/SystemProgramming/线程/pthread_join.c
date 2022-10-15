/*
* @Author: lwj
* @Date: 2022-10-15 14:58:39
* @Mail: 2194677100@gmail.com 
* @Description: 线程资源回收函数pthread_join
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<pthread.h>

/*
    int pthread_join(pthread_t thread, void **retval);
 */ 
void* fun(void* arg)
{
    int i = 0;
    for(i = 0;i < 5; i++)
    {
        printf("thread is running ...%d\n",i);
    }
    return (void*)0x3;
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
    red  = pthread_join(tid,&tmp)
    if(tmp != 0)
    {
        printf("pthread_join false!");
    }
    printf("tmp:%d\n",tmp);
    printf("main thread exit....\n");

    return 0;
}
