/*
* @Author: lwj
* @Date: 2022-10-10 08:46:03
* @Mail: h2194677100@gmail.com 
* @Description:mmap函数的使用
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/mman.h>



int main(void)
{
	int fd = -1;
	int ret = -1;
	void *addr = NULL;
	//以读写的方式打开一个文件
	fd = open("txt",O_RDWR);
	if(-1 == fd)
	{
		perror("open");
		return 1;
	}
	//将文件映射到内存
	addr = mmap(NULL,1024, PROT_READ | PROT_WRITE,MAP_SHARED,fd,0);
	if(addr == MAP_FAILED)
	{	
		perror("mmap");
		return 1;
	}
	
	printf("文件映射完毕！");

	//关闭文件
	close(fd);

	//写文件
	memcpy(addr,"lwj is a ...",12);

	//断开映射连接
	munmap(addr,1024);
	return 0;
}
