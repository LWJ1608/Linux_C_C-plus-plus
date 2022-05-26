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
    Stack<char> s(20);
    char t;
    s.push(65);
    s.push(66);
    s.push(67);
    s.pop(&t);
    cout << t << endl;
    s.lookAllStack();

    return 0;
}