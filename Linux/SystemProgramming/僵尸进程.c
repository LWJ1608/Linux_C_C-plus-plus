#include <stdio.h>
#include<stdlib.h>
#include <sys/types.h>
#include <unistd.h>

//僵尸进程：子进程结束后，父进程没有回收其资源
int main(void)
{
	int i = 0;
	pid_t pid = -1;
	pid = fork();
	if(pid == -1)
	{
		perror("fork");
		return 1;
	}
	//子进程
	if(pid == 0)
	{
		for(i =0;i < 5;i++)
		{
			printf("子进程在工作......%d\n",i);
			sleep(1);
		}
		printf("子进程结束了自己");
		exit(0);
	}
	sleep(10);
	print("父进程睡醒，退出！\n");
	return 0;
}
