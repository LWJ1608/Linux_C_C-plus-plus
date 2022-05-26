/**
 * @Author: lwj
 * @Date: 2022-05-25 23:33:43
 * @LastEditTime: 2022-05-25 23:33:44
 * @Description:数据结构---栈
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/stack.cpp
 **/
#ifndef _STACK_H_
#define _STACK_H_

#include <iostream>
#include <stdlib.h>
#include <assert.h>
using namespace std;

typedef unsigned char boolean;
#define TRUE 1
#define FALSE 0
#define DEFAULT_SIZE 10

template <typename Type>
class Stack
{
public:
    Stack(size_t sz);
    Stack(const Stack &t);
    Stack &operator=(const Stack &t);
    ~Stack();

public:
    bool isEmpty() const;
    bool isFull() const;
    boolean push(const Type &t);
    boolean pop(Type *t);
    boolean getTop(Type *t) const;
    void lookAllStack() const;

private:
    Type *base;
    int count;
    int top;
};

template <typename Type>
Stack<Type>::Stack(size_t sz = 0)
{
    count = sz > DEFAULT_SIZE ? sz : DEFAULT_SIZE;
    base = new Type[count];
    top = 0;
}
template <typename Type>
Stack<Type>::~Stack()
{
    delete[] base;
    count = top = 0;
}
template <typename Type>
bool Stack<Type>::isEmpty() const
{
    return top <= 0 ? true : false;
}
template <typename Type>
bool Stack<Type>::isFull() const
{
    return top >= count ? true : false;
}
template <typename Type>
boolean Stack<Type>::push(const Type &t)
{
    assert(!isFull());
    base[top++] = t;
    return TRUE;
}
template <typename Type>
boolean Stack<Type>::pop(Type *t)
{
    assert(!isEmpty());
    *t = base[--top];
    return TRUE;
}
template <typename Type>
boolean Stack<Type>::getTop(Type *t) const
{
    assert(!isEmpty());
    *t = base[top - 1];
    return TRUE;
}
template <typename Type>
void Stack<Type>::lookAllStack() const
{
    int i;
    for (i = 0; i < top; i++)
    {
        cout << base[i] << "->";
    }
    cout << "NULL" << endl;
}
#endif