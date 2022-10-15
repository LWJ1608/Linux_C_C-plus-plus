/*
* @Author: lwj
* @Date: 2022-10-15 14:12:42
* @Mail: 2194677100@gmail.com 
* @Description: 使用pthread_create函数创建线程
*/

#include<stdio.h>
#include<string.h>

#include<pthread.h>
/*       int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
                          void *(*start_routine) (void *), void *arg);
*/ 
//线程调度后执行的任务
void* fun(void* arg)
{
    printf("新的线程生成.............!\n");
    return NULL;
}
int main(void)
{
    int red = -1;
    pthread_t tid;
    tid = pthread_self();//获取线程id
    
    red = pthread_create(&tid,NULL,fun,NULL) ;

    if(red != -1)
    {
        printf("线程创建成功！\n");
    }
    else 
    {
        printf("线程创建失败！\n");
    }
    
    printf("当前线程id为：%lu。\n");

    return 0;
}
