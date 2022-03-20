/**
*@author lwj
*修改时间 2022.3.14
*默认构造，深拷贝和浅拷贝问题
**/

//C++中有六种函数系统会自动提供
//构造函数，拷贝构造，析沟函数，赋值语句，一般对象的取址符，常对象的取地址重载

//&取值符重载：
/*
Test t1;
test* pt = &t1; 
Test* operator&()
{
	return this;
}
 */

//常对象的取地址重载
/*
const Test t2;
const Test* pt = &t2;
const Test* operator& const()
{
	return this;
}
*/

#include<istream>
#include<string.h>

using namespace std;

class String
{
public:
	String(const char* str=NULL)//构造函数
	{       
		if(str==NULL)
		{
			data = new char;
			data[0]='\0';
		}
		else
		{
			data = new char[strlen(str)+1];
			strcpy(data,str);
		}
	}
	String(const String& str)//自定义拷贝构造函数，用于t1(t2)深拷贝;
	{
		data = new char[strlen(str.data)+1];
		strcpy(data,str.data);
	}
	String& operator=(const String& str)//用于t1=t2深拷贝
	{
		if(data!=NULL)
		{
			delete []data;
			data = new char[strlen(str.data)+1];
			strcpy(data,str.data);
		}
		return *this;
	}
	~String()
	{
		delete []data;
	}
private:
	char* data;
};
int main()
{
	String s1("ksdfgsdg");
	String s2;
	/*s2=s1 如果是系统提供的默认构造函数会报错，对象之间的拷贝是浅拷贝，
	因为两个指针同时指向同一个地址，当各自对象的析构函数清空指针指向的空间时，
	会出现重复删除数据的错误,通过开辟另一个空间，进行深拷贝，可解决问题。如上代码：*/
	s2=s1;//用浅拷贝会报错
	String s3("odsfaps");
	s1=s3;//用浅拷贝会报错
	String s4(s1);
	return 0;
}














