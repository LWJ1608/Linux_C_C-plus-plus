/**
*@author lwj
*修改日期 2022.3.15
*static_cast<>(),reinterpret_cast<>()这两个为C++内置函数
**/

//static_cast<>()用于静态转换相当于C中的隐式转换，但他们有区别
#include<iostream>
using namespace std;


int main()
{
	int i=9;
	double a=4.8558;
	//用到static_cast都称为静态转换
	i = static_cast<int>(a);//将double类型的a转换为int,然后赋值给i（相当于C中的i=(int)a;C中称为隐式转换）
	int b=8;
	a=static_cast<double>();
	cout<<"i = "<<i<<endl;
	return 0;
}
