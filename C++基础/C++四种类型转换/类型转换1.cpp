/**
*@author lwj
*修改日期 2022.3.15
*dynamice_cast<>()主要用于父类对象指向子类对象
**/

//dynamic_cast<>()父类对象接受子类对象时，然后为了分清子类的对象，
//可以有dynamic_cast<>()来进行类型转换回去，如果是对应接收对象接受到相同对象，则转换成功，否则返回NULL
//如下：


#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void cry() = 0;
};

class Cat:public Animal//猫类
{
public:
	void cry()
	{
		cout<<"喵喵"<<endl;
	}
	void doThing()
	{
		cout<<"吃老鼠"<<endl;
	}
};

class Dog:public Animal//狗类
{
public:

	void cry()
	{
		cout<<"汪汪"<<endl;
	}
	void doThing()
	{
		cout<<"看家"<<endl;
	}
};
void test(Animal* base)
{
	base->cry();//1.有虚函数重写 2.有继承 3.有父类指针指向子类对象 4.有多态发生

	//dynamic_case能识别子类对象，在运行是进行类型识别
	Cat* cat1 = dynamic_cast<Cat *>(base);//识别数据类型是否相同
	if(cat1)//如果识别的参数和定义的类型相同执行，否则返回NULL
	{
		cat1->doThing();
	}
	
	Dog* dog1 = dynamic_cast<Dog *>(base);
        if(dog1)
        {
                dog1->doThing();
        }
}

int main()
{
	Cat c1;
	Dog d1;
	
	test(&c1);
	test(&d1);
	Animal* A = NULL;
	A = static_cast<Dog *>(&d1);
	return 0;
}

