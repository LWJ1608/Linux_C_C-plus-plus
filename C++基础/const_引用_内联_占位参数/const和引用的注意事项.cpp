#include<iostream>
using namespace std;

int main(void){
	int a =9; 
    int &b = a; //普通引用,引用一个常量,常量没有内存地址,引用就是给内存取多个别名;
	int &i=10;//会报错，&i没有分配的地址存储数值，只能让他等于地址 
    const int &c = 10; //加上const后&c变成常量，编译器会给它分配内存空间，可以直接赋给数值 
	cout<<b<<endl;
    return 0;
}
