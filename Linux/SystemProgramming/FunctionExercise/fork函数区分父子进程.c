#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main()
{
	pid_t pid;
	pid = fork();
	if(pid < 0)
	{//没有创建成功
		perror("fork");
	}
	if(pid == 0)
	{//子进程
		while(1)
		{
			printf("子进程");
			sleep(1);
		}
	}
	
	else if(pid > 0)
	{//父进程
		while(1)
		{
			printf("父进程");
			sleep(1);
		}
	}		
	return 0;
}

