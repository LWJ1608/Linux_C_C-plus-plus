#include<stdio.h>
#include<unistd.h>
//int execlp(const char* file,const char* arg, ... ,/* (char*)NULL*/)
//int execl(const char* ,path,const char* arg, ... ,/* (char*)NULL*/)
int main(void)
{
	//execlp:
	//arg0 arg1 arg2 ...argn
	//arg0为可执行文件，argn必须是NULL
	//等价于ls -l /homie	
	//execlp("ls","ls","-l","/home",NULL);
	

	//execl:
	//arg0为可执行绝对文件路径或相对路径，第二个参数为可执行文件
	//中间参数为可执行文件的参数
	//最后一个参数为NULL
	
	printf("hello world!");	
	execl("/bin/ls","ls","-l","/home",NULL);
	
	return 0;
}

