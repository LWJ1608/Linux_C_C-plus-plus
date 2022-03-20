/**
*@author lwj
*修改日期 2022.3.17
*二进制文件的读写
**/

//二进制文件与文本文件的区别在：
//二进制文件是将写入的数据直接以数据在物理内存地址上的形式写入，这样可读性差，但是可以移植性好
//文本文件是将写入的数据转换传换成字符然后写入文件，这样可读性好，但是可以移植性差点
#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;
int main()
{
	string arr[10];
	int tmp=sizeof(arr)/sizeof(arr[0]);
	ofstream ofile;
	ofile.open("test.txt",ios::out |ios::trunc | ios::binary);//
	if(!ofile)
	{
		cerr<<"文件打开失败！"<<endl;
		exit(1);
	}
	for(int i=0;i<10;i++)
	{
		ofile<<i<<" ";//写入数据
	}
	ofile.close();	
	ifstream ifile;
	ifile.open("test.txt",ios::in);
	for(int j=0;j<tmp+9;j++)
	{
		ifile>>arr[j];//读出数据
	}
	for(int a=0;a<tmp;a++)
	{
		cout<<arr[a]<<" ";
	}
        cout<<endl;

	ofile.close();
	return 0;	
}

