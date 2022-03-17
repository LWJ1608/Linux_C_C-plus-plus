/**
*@author lwj
*修改时间 2022.3.16
*文件写入
**/

#include<iostream>
#include<fstream>//输出流头文件
#include<stdlib.h>
using namespace std;


int main()
{
	string arr[10];
	ifstream ifile;//输出流对象
	ifile.open("test.txt",ios::in);
	if(!ifile)
	{
		cerr<<"打开文件失败!"<<endl;
		exit(1);
	}
	for(int i=0;i<6;i++)
	{
		ifile>>arr[i];
	}
	for(int j=0;j<sizeof(arr)/sizeof(arr[0]);j++)
	{
		cout<<arr[j]<<" "<<endl;
	}
	return 0;
}
