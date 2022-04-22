/**
*@author lwj
*修改日期 2022.2.23
*类的继承
**/


//继承下来时有2个n，在调用时候会产生二义性；其采用虚继承可以解决：
#include<iostream>
using namespace std;
 
class Base{
public:
    int n;
};
 
class D1 : virtual public Base{//加上virtual，表示虚继承
public:     //public virtual Base和上面等同
    int x;
};
 
class D2 : virtual public Base{  //加上virtual，表示虚继承
public:
    int y;
};
 
class S : public D1, public D2{  //此时就只有一个n了;
public:
    int z;
};
 
int main(){
    S c;
    c.n = 10;
 
    cout<<&c.D1::n<<endl;  //因为同一个n,所以地址相同；
    cout<<&c.D2::n<<endl;
    return 0;
}

//同名隐藏问题
/*
#include<iostream>
using namespace std;
  
class Base
{
public:
    void fun()  //父类的无参fun()方法
    {
        cout<<"This is Base fun()"<<endl;
    }
    void fun(int a) //父类的一个参数的fun()方法
    {
        cout<<"This is Base fun(int)"<<endl;
    }
};
  
class D : public Base
{
public:
    void fun()   //子类的fun()方法
    {
        cout<<"This is D fun()"<<endl;
    }
};
  
int main()
{
    D d;
    d.fun();   //肯定调用子类的fun()方法
 // d.fun(1);  此时因为函数名相同，隐藏了父类所有的该方法，子类有没有参数，所以报错
    d.Base::fun(1);//此时调用了父类的fun带参数的方法，刚才只是隐藏了，并没有覆盖！
    return 0;
}

*/





