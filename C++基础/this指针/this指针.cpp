/**
@author lwj
修改日期: 2022.3.14
this指针的应用
**/

//this指针主要是为了让每个对象知道哪个数据是自己的数据成员

//在类中的this在成员函数中的本质：如下
//T1.setData(1)相当于 setData(&T1,1);
//vodi setData(const int data)相当于void setData(Test *this,const int data){}


#include<iostream>
using namespace std;

class Test
{
public:
	Test(int t = int()):data(t){};
	//这样的情况下，其实是隐藏了this指针
	void setData(const int t)
	{
		data=t;
	}
 	//在这种情况下，就要明确指出this指针的指向，这样类对象可以知道那个是自己的成员数据
//        void setData(int data)
//        {
//               this->data=data;
//        }

	int getData()
	{
		return data;
	}
private:
	int data;
};

int main()
{
	int i = int();
	Test T1;
	T1.setData(1);
	i = T1.getData();
	cout<<"i = "<<i<<endl;
}



















