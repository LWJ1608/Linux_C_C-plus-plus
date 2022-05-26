/**
 * @Author: lwj
 * @Date: 2022-05-26 23:37:52
 * @LastEditTime: 2022-05-26 23:37:52
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Stack/listStack/listStack.h
 **/
#pragma once

template <typename Type>
class linkStack
{
private:
    struct Node //
    {
    public:
        T data;
        Node *next;
        Node(const T &value, Node *p = NULL)
        {
            data = value;
            next = p;
        }
        Node() { next = NULL; }
    };
    Node *top; //栈顶指针
public:
    linkStack() { top = NULL; }                //构造函数
    ~linkStack() { clear(); }                  //析构函数
    void clear();                              //清空
    void push(const T &value);                 //进栈
    int size() const;                          //返回链栈大小
    bool empty() const { return top == NULL; } //判空
    T pop();                                   //出栈
    T getTop() const { return top->data; }     //返回栈顶元素
};

template <typename Type>
void linkStack<T>::push(const T &value)
{
    Node *p;
    p = new Node(value, top);
    top = p;
}

template <typename Type>
void linkStack<T>::clear()
{
    Node *p;

    while (top)
    {
        p = top;
        top = top->next;
        delete p;
    }
}

template <typename Type>
int linkStack<T>::size() const
{
    int curlength = 0;
    Node *p = top;
    while (p)
    {
        ++curlength;
        p = p->next;
    }
    return curlength;
}

template <typename Type>
T linkStack<T>::pop()
{
    Node *p;
    p = top;
    top = top->next;
    return p->data;
}