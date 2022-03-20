/**
*@author lwj
*修改日期 2022.3.18
*写时拷贝简单实现
**/

//写时拷贝：
//目的是保证数据不发生泄漏的同时，合理利用内存空间，
//简单说就是当使用浅拷贝不会发生内存泄漏等问题，则不再进行深拷贝开辟新空间，
//当使用浅拷贝会发生问题时，程序会使用深拷贝，也就是说写实拷贝能根据情况来，
//决定使用深拷贝还是拷贝，这样能够合理利用好空间。

//


#include<iostream>
#include<string.h>
#include<malloc.h>
class String;
class String_rep//这个类主要是进行数据存储的
{
friend class String;//友元类
public:
	String_rep(const char* str=""):use_count(0)
	{
		if(!str)
		{
			data=new char(strlen(str)+1);
			strcpy(data,str);
		}
		else
		{
			data=new char[1];
			data[0]=0;
		}
	}
	String_rep(const String_rep &s);
	String_rep& operator=(const String_rep &s); 
	~String()
		{
			delete []data;
			data=NULL;
		}
public:
	void increment()//指向对象空间时+1
	{
		++use_count;
	}
	void decrement()//当指向对象空间指针减少时
	{
		if(--use_count==0)
		{
			delete this;
		}
	}
	int print_use_count()
	{
		return use_count;
	}
	char* getData()
	{
		return data;
	} 
private:
	char * data;
	int use_count;
};
class String//这个类主要是进行数据操作
{
public:
	String(const char* str=""):rep(new String_rep(str))
	{
		rep->increment();
	}
	String(const String &s)//拷贝构造
	{	
		rep=s.rep;
		rep->increment();
	}
	String& operator=(const String &s)//赋值重载
	{
		if(rep!=s)
		{
			rep->decrement();
			rep=s.rep;
			rep->decrement();
		}
	}
	~String()
	{
		rep->decrement();
	}
public:
	int  print_use_count1()
	{
		return rep->print_use_count();
	}
	char* pirnt_data()
	{
		return rep->getData();
	}

	void toupper()
	{
		if(rep->print_use_count()>1)//当对象个数大于1时
		{
			rep->decrement();
			String_rep *rep_new = new String_rep(rep->data);
			rep=rep_new;
			rep->increment();
		}
	}
private:
String_rep* rep;
};

int main()
{
    String s1("hello");
    String s2 = s1;
    String s3("xyz");
    s3 = s2;
    s1.toupper();
    s1.print_data();
    cout<<"s1 count = "<<s1.print_use_count1()<<endl;
    s2.print_data();
    cout<<"s2 count = "<<s2.print_use_count1()<<endl;
    s3.print_data();
    cout<<"s3 count = "<<s3.print_use_count1()<<endl;
    return 0;
}





