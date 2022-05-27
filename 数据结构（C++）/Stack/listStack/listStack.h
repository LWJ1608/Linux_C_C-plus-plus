/**
 * @Author: lwj
 * @Date: 2022-05-26 23:37:52
 * @LastEditTypeime: 2022-05-26 23:37:52
 * @Description:实现链栈
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Stack/listStack/listStack.h
 **/
// #pragma once

// template <typename Type>
// class LinkStack
// {
// private:
//     struct Node //把每个数据封装成一个结构体，里面包含data和next
//     {
//     public:
//         Type data;
//         Node *next;
//         Node(const Type &value, Node *p = NULL)
//         {
//             data = value;
//             next = p;
//         }
//         Node() { next = NULL; }
//     };
//     Node *top; //栈顶指针
// public:
//     LinkStack() { top = NULL; } //构造函数
//     ~LinkStack() { clear(); }   //析构函数

// public:
//     void clear();                                //清空
//     void push(const Type &value);                //进栈
//     int size() const;                            //返回链栈大小
//     bool empty() const { return top == NULL; }   //判空
//     Type pop();                                  //出栈
//     Type getTypeop() const { return top->data; } //返回栈顶元素
// };

// template <typename Type>
// void LinkStack<Type>::push(const Type &value)
// {
//     Node *p;
//     p = new Node(value, top);
//     top = p;
// }

// template <typename Type>
// void LinkStack<Type>::clear()
// {
//     Node *p;

//     while (top)
//     {
//         p = top;
//         top = top->next;
//         delete p;
//     }
// }

// template <typename Type>
// int LinkStack<Type>::size() const
// {
//     int curlength = 0;
//     Node *p = top;
//     while (p)
//     {
//         ++curlength;
//         p = p->next;
//     }
//     return curlength;
// }

// template <typename Type>
// Type LinkStack<Type>::pop()
// {
//     Node *p;
//     p = top;
//     top = top->next;
//     return p->data;
// }
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
    ~ListStack(){clear()};

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
        top--;
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
        tmp--;
        count++;
    }
}
//插入数据
template <typename Type>
void ListStack<Type>::push(const Type &elem)
{
    Node *tmp = new Node;
    tmp->data = elem;
    tmp->next = top;
    top = tmp;
}
