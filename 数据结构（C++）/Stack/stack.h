/**
 * @Author: lwj
 * @Date: 2022-05-25 23:33:43
 * @LastEditTime: 2022-05-25 23:33:44
 * @Description:数据结构---栈
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/stack.cpp
 **/
#pragma once //防止头文件重复包含
#include <iostream>
#include <assert.h>

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
    bool isEmpty() const; //判空
    bool isFull() const;  //判满
    void push(Type s);    //插入元素
    int size() const;     //返回栈元素个数
    Type getTop();        //返回栈顶元素
    void pop();           //移除栈顶元素
private:
    Type *data; //维护空间指针
    int count;  //空间容量
    int top;    //顶端元素的下一个位置
};
template <typename Type>
Stack<Type>::Stack(size_t sz = 0)
{
    this->count = sz != 0 ? sz : DEFAULT_SIZE; //判断sz是否被赋值，没有的就默认等于DEFAULT_SIZE
    this->data = new Type[count];              //分配空间
    this->top = 0;
}

template <typename Type>
Stack<Type>::~Stack()
{
    delete[] data;
    data = nullptr;
    count = top = 0;
}
//拷贝构造
template <typename Type>
Stack<Type>::Stack(const Stack &t)
{
    this->count = t.top;
    for (int i = 0; i < t.top; i++)
    {
        data[i] = t.data[i];
        top++;
    }
}
//判空
template <typename Type>
bool Stack<Type>::isEmpty() const
{
    return top <= 0 ? true : false;
}
//判满
template <typename Type>
bool Stack<Type>::isFull() const
{
    return top >= count ? true : false;
}
//插入元素
template <typename Type>
void Stack<Type>::push(Type s)
{
    assert(!isFull()); //断言，如果空间已满程序会报错，程序终止
    data[top] = s;
    top++;
}
//返回栈元素个数
template <typename Type>
size_t Stack<Type>::size() const
{
    return top;
}
//返回栈顶元素
template <typename Type>
Type Stack<Type>::getTop()
{
    assert(!isEmpty()); //断言，如果空间为空程序会报错，程序终止
    return data[top - 1];
}
//移除栈顶元素
template <typename Type>
void Stack<Type>::pop()
{
    assert(!isEmpty()); //断言，如果空间为空程序会报错，程序终止
    top--;
}