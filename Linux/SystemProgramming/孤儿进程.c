#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

/*
 *孤儿进程是父进程已死而留下的子进程，该子进程会被1号进程收养，
 *一号进程会回收它的资源，因此孤儿进程不会有危害。
 * */

int main()
{	
	pid_t pid = -1;
	pid = fork();//创建子进程
	if(pid == -1)
	{
		perror("fork");	
		return 1;
	}
	//父进程
	if(pid > 0)
	{
		printf("父进程睡一秒钟...");
		sleep(1);
		printf("父进程退出。");
		exit(0);
	}
	while(1)
	{
		printf("子进程在运行...,ppid=%d\n",getppid());
		sleep(1);
	}				
		
	return 0;		
}













