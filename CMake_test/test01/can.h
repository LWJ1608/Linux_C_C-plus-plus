#include <iostream>
#include <stdlib.h>
using namespace std;
struct stack {  //定义一个栈
	int* Slist;
	int top;
	int Maxsize;
};
void Initstack(stack& SL, const int MS); //栈初始化
bool Stackempty(stack& SL);//判栈空
bool Stackfull(stack& SL); //栈满
void Clearstack(stack& SL); //清空栈
int Push(stack& SL, int& item);//新元素推进栈
int Pop(stack& SL);//出栈
void Traverstack(stack& SL); //输出栈中元素
const int N = 5;//预设栈的最大空间