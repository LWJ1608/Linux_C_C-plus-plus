#include<iostream>
using namespace std;

//默认参数和占位参数
//目的：为以后的程序留下扩展;

//函数占位参数：函数调用时,必须写够参数;
void func1(int a, int b, int){
    cout<<"a "<<a<<" b "<<b<<endl;
    
}

void func2(int a, int b, int = 0){  //这个函数既是默认参数，也是占位参数;
    cout<<"a "<<a<<" b "<<b<<endl;
}

int main(void){
    //func1(1, 2); erro 占位参数此时必须为3个,所以错误;
    //func1(1, 2, 3); 对
    func2(1, 2); //因为函数有默认参数，所以可以传入两个数，也可以传入3个数;
    func2(1, 2, 3);//此时第3个参数没有什么意思,不能使用;

    return 0;
}
