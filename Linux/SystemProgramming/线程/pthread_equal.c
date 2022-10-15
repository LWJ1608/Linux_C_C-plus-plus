/*
* @Author: lwj
* @Date: 2022-10-15 13:35:09
* @Mail: 2194677100@gmail.com 
* @Description: 使用pthread_equal函数判断两个线程是否相等 
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<pthread.h>

int main(void)
{
    pthread_t tid  = 0;
    tid = pthread_self();
    
    if(pthread_equal(tid,pthread_self()))
    {
        puts("equal!");
    }
    else 
    {
        puts("not equal!");
    }

    return 0;
}
