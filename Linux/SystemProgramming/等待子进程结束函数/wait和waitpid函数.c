#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<string.h>
#include<wait.h>
/*
 * wait和wait_pid用来回收子进程的资源，避免进程成为僵尸进程
 *两者主要求别在于wait会等待子进程运行结束，而wait_pid则不会
 **/
int main()
{
	int status = -1;
	int i = 0;
	int ret = -1;
	pid_t pid;
	pid = fork();//创建子进程
	if(pid < 0)
	{
		perror("fork");
		return 1;
	}
	//子进程
	if(0 == pid)
	{
		for(i = 0;i < 5;i++)
		{
			printf("child process do thing %d\n",i);
			sleep(1);
		}
		exit(10);//子进程结束
	}
	//父进程执行
	printf("父进程等待子进程退出...\n");
	ret = wait(&status);
	if(ret == -1)
	{
		perror("wait");
		return 1;		
	}
	printf("父进程回收了子进程的资源。\n");
	return 0;

}
