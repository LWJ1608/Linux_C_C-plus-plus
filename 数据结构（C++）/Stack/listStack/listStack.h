/**
 * @Author: lwj
 * @Date: 2022-05-26 23:37:52
 * @LastEditTypeime: 2022-05-26 23:37:52
 * @Description:实现链栈
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Stack/listStack/listStack.h
 **/
#pragma once
#include <iostream>
#include <assert.h>
template <typename Type>
class ListStack
{
private:
    struct Node //将每个结点封装成一个结构体，结构体里包含data和next
    {
    public:
        Type data;                 //所要存储的数据
        Node *next;                //指向下个结点的指针
        Node() { next = nullptr; } //创建出的对象没初始化，则默认它next成员指向空指针
        Node(const Type &value, Node *p = nullptr)
        {
            data = value;
            next = p;
        }
    };
    Node *top; //栈顶指针，指向栈顶
public:
    ListStack() { top = nullptr; };
    ~ListStack() { clear(); }

public:
    void clear();                //清空
    bool isEmpty() const;        //判空
    int size() const;            //返回元素个数
    void push(const Type &elem); //插入数据
    Type getTop() const;         //返回栈顶元素
    Type pop();                  //移除栈顶元素
};

//清空
template <typename Type>
void ListStack<Type>::clear()
{
    Node *tmp = nullptr;
    tmp = top;
    while (top)
    {
        tmp = top;
        top = top->next;
        delete tmp;
    }
}
//判空
template <typename Type>
bool ListStack<Type>::isEmpty() const
{
    return top->next == nullptr;
}
//返回回元素个数,也可以在类数据成员增加一个变量记录元素个数
//这样就不用遍历，达到用空间换时间的目的
template <typename Type>
int ListStack<Type>::size() const
{
    Node *tmp = nullptr;
    int count = 0;
    tmp = top;
    while (tmp->next)
    {
        tmp = tmp->next;
        count++;
    }
}
//插入数据
template <typename Type>
void ListStack<Type>::push(const Type &elem)
{
    Node *tmp = new Node(elem, top);
    top = tmp;
}
//返回栈顶元素
template <typename Type>
Type ListStack<Type>::getTop() const
{
    return top->data;
}
//移除栈顶元素
template <typename Type>
Type ListStack<Type>::pop()
{
    Node *tmp = nullptr;
    tmp = top;
    top = top->next;
    return tmp->data;
}