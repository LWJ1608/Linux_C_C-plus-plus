/*
 * @Author: lwj
 * @Date: 2022-04-25 22:29:13
 * @Description:
 */
#include "can.h"

void Initstack(stack &SL, const int MS) //栈的初始化
{
	SL.Slist = new int[MS];
	if (!SL.Slist)
	{
		cout << "给栈分配内存失败。" << endl;
		exit(1);
	}
	SL.Maxsize = MS;
	SL.top = -1;
}
bool Stackempty(stack &SL) //判空
{
	return SL.top == -1;
}
bool Stackfull(stack &SL) //判满
{
	return SL.top == SL.Maxsize;
}
void Clearstack(stack &SL) //清空栈
{
	SL.top = -1;
}
int Push(stack &SL, int &item) //元素进栈
{
	if (Stackfull(SL))
		return false;
	SL.top++;
	SL.Slist[SL.top] = item;
	return SL.Slist[SL.top];
}
int Pop(stack &SL) //元素出栈
{
	if (Stackempty(SL))
		return false;
	return SL.Slist[SL.top--];
	SL.top--;
}
void Traverstack(stack &SL) //输出栈
{
	for (int i = 0; i <= SL.top; i++)
		cout << SL.Slist[i] << endl;
	cout << endl;
}
