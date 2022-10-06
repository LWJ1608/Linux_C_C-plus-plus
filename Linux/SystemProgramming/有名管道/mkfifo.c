/*
* @ Author: lwj
* @Date: 2022-10-06 20:14:35
* @Mail: 2194677100@gmail.com 
* @Description:有名管道的的实现
*/

#include<stdio.h>
#include<stdlib.h>

#include<sys/types.h>
#include<sys/stat.h>

//通过mkfifo函数创建
int main(void)
{
	int ret = -1;

	ret = mkfifo("fifo",0644);
	if(ret == -1)
	{
		perror("mkfifo");
		return 1;
	}
	printf("fifo管道创建完成！\n");
	

    return 0;
}
