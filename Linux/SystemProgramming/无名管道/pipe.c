#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	int fds[2];
	int ret = -1;
	
	//创建一个无名管道
	ret = pipe(fds);
	if(ret == -1)
	{
		perror("pipe");
		return 1;
	}
	//fds[0]用于读管道，fds[1]用于写
	printf("fds[0]=%d,fds[1]=%d\n",fds[0],fds[1]);
	
	//关闭文件描述符
	close(fds[0]);
	close(fds[1]);
	
	return 0;
}
