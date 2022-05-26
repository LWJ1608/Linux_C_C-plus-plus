/**
 * @Author: lwj
 * @Date: 2022-05-25 23:33:43
 * @LastEditTime: 2022-05-25 23:33:44
 * @Description:数据结构---栈
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/stack.cpp
 **/
#pragma once
#include <iostream>

template <typename Type>
class Stack
{
public:
    Stack(size_t sz);      // size_t相当于无符号整数unsigned int
    Stack(const Stack &s); //拷贝构造
    Stack operator=()
    {
    }

private:
    Type *base; //维护空间指针
    int count;  //元素个数
    int top;    //顶端元素的下一个位置
};