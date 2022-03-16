#include<iostream>
using namespace std;

//引用的本质是常量指针
//int &p 相当于  int * const p 

struct Teacher{
    char name[64];
    int age;
    int &a; //很像指针所占用的内存空间大小;
    int &b; //引用在类内可以不赋值，类外这样写会报错 
};
//普通引用占内存空间,和指针所占空间大小是一样的;

//引用的本质:引用在C++中的内部实现是一个常指针;C++编译器帮我们程序员取了一个地址;
//          Type &name <===> Type * const name;
int main(void){
    cout<<sizeof(Teacher)<<endl;

    return 0;
}
//一般int返回,返回的是变量的值;
//一般int &,引用返回的是变量本身;函数可放左边/右边;
//用引用作为返回值的话,其返回的空间不能是临时空间;
//g2() = 100;  可以作为左值,因为引用返回的是一段连续的存储空间,是变量;
//函数作左值,必须返回一个引用;
