/**
*@author lwj
*修改日期 2022.3.16
*文件的写入
**/

#include<iostream>
#include<fstream>//标准输出流头文件
#include<stdlib.h>//free() , exit() , calloc()

using namespace std;

int main()
{	
	ofstream ofile;
	ofile.open("test.txt",ios::out);
	//ofstream ifile("test.txt",ios::out);//等同上一语句
	
	if(!ofile)
	{
		cerr<<"打开失败！"<<endl;//相对与cout来讲，cerr不经过缓冲区，直接输出错误
		exit(1);//直接结束程序
	}
	for(int i=0;i<6;i++)
	{
		ofile<<"jjll"<<endl;
	}
	ofile.close();
	return 0;
}

















