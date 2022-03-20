/**
*@author  liaowangjun
*修改时间 2022.3.14
*类模板的使用
**/

//1.在类上方写上类模板声明，友元函数类最上方也要加模板声明
//2.成员函数在类外声明，须加上模板，还要在作用域限定府前面加数据类型<Type>
#include<iostream>
using namespace std;

template<typename Type>
class Test
{
public:
//该构造函数意思：如果创建类对象同时传入参数，则data被赋值为该参数，否则data被初始化为0；
//相当于同时创建了，有参构造和无参构造
	Test(Type t = Type()):data(t){}
	void setData(const Type t)
	{
		data = t;
	}
	Type getData()
	{
		return data;
	}
private:
	Type data;
};
int main()
{
	Test<int>T1(2);
	//T1.setData(1);
	T1.getData();
	cout<<"getData() = "<<T1.getData()<<endl;

}
