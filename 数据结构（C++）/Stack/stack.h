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
    Stack(size_t sz);                 // size_t相当于无符号整数unsigned int
    Stack(const Stack &t);            //拷贝构造
    Stack &operator=(const Stack &t); //等号重载
    ~Stack();

public:
    bool isEmpaty() const; //判空
    bool isFull() const;   //判满
    void push(Type s);     //插入元素
    Type getPop();         //返回栈顶元素
    void pop();            //去除栈顶元素
private:
    Type *base; //维护空间指针
    int count;  //空间容量
    int top;    //顶端元素的下一个位置
};
template <typename Type>
Stack<Type>::Stack(size_t sz = 0)
{
    this->count = sz != 0 ? sz : DEFAULT_SIZE; //判断sz是否被赋值，没有的就默认等于DEFAULT_SIZE
    this->base = new Type[count];              //分配空间
    this->top = 0;
}

template <typename Type>
Stack<Type>::~Stack()
{
    delete[] base;
    base = nullptr;
    conut = top = 0;
}
//判空
template <typename Type>
bool Stack<Type>::isEmpaty() const
{
    return top <= 0 ? true : false;
}
//判满
template <typename Type>
bool Stack<Type>::isFull() const
{
    return top >= count ? true : false;
}
