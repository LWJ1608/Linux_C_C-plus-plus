/**
 * @Author: lwj
 * @Date: 2022-05-25 23:33:43
 * @LastEditTime: 2022-05-25 23:33:44
 * @Description:数据结构---栈
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/stack.cpp
 **/
#pragma once
#include <iostream>

#define DEFAULT_SIZE 10
template <typename Type>
class Stack
{
public:
    Stack(size_t sz);                // size_t相当于无符号整数unsigned int
    Stack(const Stack &t);           //拷贝构造
    Stack &operator=(const Stack &t) //等号重载
        ~Stack();

public:
    bool isEmpaty() const; //判空
    //判满
    //插入元素
    //返回栈顶元素
    //去除栈顶元素
private:
    Type *base; //维护空间指针
    int count;  //元素个数
    int top;    //顶端元素的下一个位置
};
template <typename Type>
Stack<Type>::Stack(size_t sz = 0)
{
    int sz = sz != 0 ? sz : DEFAULT_SIZE;

    this->count =
}
template <typename Type>
bool Stack<Type>::isEmpaty() const
{
    return top <= 0 ? true : false;
}
