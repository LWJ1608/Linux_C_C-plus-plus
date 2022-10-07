/*
* @Author: lwj
* @Date: 2022-10-07 14:01:13
* @Mail: 2194677100@gmail.com 
* @Description: 有名管道实现聊天
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

//先读后写
//以只读的方式打开管道1
//以只写的方式打开管道2
int main(void)
{
	int fdr = -1;
	int fdw = -1;
	int ret = -1;
	//以只读的方式打开管道1
	ret = open("fifo1",)



    return 0:
}
