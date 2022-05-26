/**
 * @Author: lwj
 * @Date: 2022-05-26 10:35:59
 * @LastEditTime: 2022-05-26 10:36:00
 * @Description:测试栈功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Stack/main.cpp
 **/
#include <iostream>
#include "stack.h"
using namespace std;

int main(void)
{
    Stack<int> s1(8); //指定s1的容量为8
    for (int i = 0; i < 8; i++)
    {
        s1.push(i); //插入数据
    }
    Stack<int> s2(s1);
    // cout << "s1的元素的个数：" << s1.size() << endl;
    cout << "sadfa" << endl;
    return 0;
}