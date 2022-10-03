#include<stdio.h>

//int execlp(const char* file,const char* arg, ... ,/* (char*)NULL*/)
int main(void)
{
	print("hello execlp()。");
	//arg0 arg1 arg2 ...argn
	//arg0为可执行文件，argn必须是NULL
	//等价于ls -l /home
	execlp("ls","ls","l","/home",NULL);
	printf("hello world!");	
	
	return 0;
}

