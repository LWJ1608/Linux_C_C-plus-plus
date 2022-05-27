/**
 * @Author: lwj
 * @Date: 2022-05-26 10:35:59
 * @LastEditTime: 2022-05-26 10:36:00
 * @Description:测试顺序栈功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/SeqStack/main.cpp
 **/
#include <iostream>
#include "seqStack.h"
using namespace std;

int main(void)
{
    SeqStack<int> s1(8); //指定s1的容量为8
    for (int i = 0; i < 88; i++)
    {
        s1.push(i); //插入数据
    }
    cout << "s1的元素的个数：" << s1.size() << endl;
    cout << "栈顶元素为：" << s1.getTop() << endl;
    //移除栈顶元素
    s1.pop();
    cout << "栈顶元素为：" << s1.getTop() << endl;
    return 0;
}