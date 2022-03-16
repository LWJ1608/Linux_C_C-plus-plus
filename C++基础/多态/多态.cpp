/**
*@author lwj
*修改日期 2022.3.16
*多态内容分析
**/

//1.重载和重写的区别：
//
//重载overload：在同一个类中，函数名相同，参数列表不同，编译器会根据这些函数的不同参数列表，将同名的函数名称做修饰，从而生成一些不同名称的预处理函数，未体现多态。

//重写override：也叫覆盖，子类重新定义父类中有相同名称相同参数的虚函数，主要是在继承关系中出现的，被重写的函数必须是virtual的，重写函数的访问修饰符可以不同，尽管virtual是private的，子类中重写函数改为public,protected也可以，体现了多态。

//重定义redefining：也叫隐藏，子类重新定义父类中有相同名称的非虚函数，参数列表可以相同可以不同，会覆盖其父类的方法，未体现多态。

//a如果派生类的函数和基类的函数同名，但是参数不同，此时，不管有无virtual，基类的函数被隐藏。

//b如果派生类的函数与基类的函数同名，并且参数也相同，但是基类函数没有vitual关键字，此时，基类的函数被隐藏。（如果有virtual就成重写了 )

#include <iostream>  
using namespace std;  
class Base  
{  
private:  
    virtual void display() { cout<<"Base display()"<<endl; }  
    void show(){ cout<<"Base show()"<<endl; }  
public:  
    void exec(){ display(); show(); }  
    void fun(string s) { cout<<"Base fun(string)"<<endl; }  
    void fun(int a) { cout<<"Base fun(int)"<<endl; }//overload:两个fun函数在Base类的内部被重载  
    virtual int function(){}  
};  
class ClassA:public Base  
{  
public:  
    void display() { cout<<"ClassA display()"<<endl; }//override:基类中display为虚函数，且参数列表一直，故此处为重写  
    void fun(int a,int b) { cout<<"ClassA fun(int,int)"<<endl; }//redefining:fun函数在Base类中不为虚函数，故此处为重定义  
    void show() { cout<<"ClassA show()"<<endl; }//redefining:理由同上  
    int function(int a){}//overload:注意这是重载而不是重写，因为参数列表不同，在编译时ClassA中其实还有个编译器自己偷偷加上的从Base继承来的int function(){};  
};  
int main(){  
    ClassA a;  
    Base *base=&a;  
    base->exec();//display()是ClassA的，因为覆盖了，show()是Base自己的  
    a.exec();//结果同上  
    a.show();//show()是ClassA重定义的  
    base->fun(1);//fun()是Base自己的，因为直接从对象base调用  
    a.fun(1, 1);//fun()是ClassA重定义的  
    return 0;  
}
