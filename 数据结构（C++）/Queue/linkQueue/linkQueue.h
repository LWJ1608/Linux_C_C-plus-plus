/**
 * @Author: lwj
 * @Date: 2022-05-31 17:19:02
 * @Description:实现链队列
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Queue/linkQueue/linkQueue.h
 **/
#pragma once
#include <iostream>
#include <assert.h>
template <typename Type>
class linkQueue
{
private:
    struct node
    {
        Type data;  //数据域
        node *next; //指针域
        node(const Type &value, node *p = NULL)
        {
            this->data = value;
            this->next = p;
        }
        node() : next(NULL) {}
        ~node(){};
    };
    node *begin, *end; //分别为队首指针和队尾指针
public:
    linkQueue() { begin = end = NULL; }          //构造函数
    ~linkQueue();                                //析构函数
    bool empty() const { return begin == NULL; } //判空
    void clear();                                //清空
    int size() const;                            //返回链队列大小
    void push(const Type &value);                //入队
    Type pop();                                  //出队
    Type front() const;                          //读队头元素，并返回它的值
};

template <typename Type>
linkQueue<Type>::~linkQueue() //析构函数
{
    node *p;
    while (begin)
    {
        p = begin;
        begin = begin->next;
        delete p;
    }
}
template <typename Type>
void linkQueue<Type>::clear() //清空
{
    node *p;
    while (begin)
    {
        p = begin;
        begin = begin->next;
        delete p;
    }
    end = NULL;
}

template <typename Type>
int linkQueue<Type>::size() const //返回链队列大小
{
    node *p;
    p = begin;
    int num = 0;
    while (p)
    {
        num++;
        p = p->next;
    }
    return num;
}

template <typename Type>
void linkQueue<Type>::push(const Type &value) //入队
{
    if (empty())
    {
        begin = end = new node(value);
    }
    else
    {
        end->next = new node(value);
        end = end->next;
    }
}

template <typename Type>
Type linkQueue<Type>::pop() //出队并返回其值
{
    if (empty())
        throw outOfRange();
    node *p;
    p = begin;
    Type value = begin->data;
    begin = begin->next;
    if (empty())
        end = NULL;
    delete p;
    return value;
}

template <typename Type>
Type linkQueue<Type>::front() const //读队头元素，并返回它的值
{
    if (empty())
        throw outOfRange();
    return begin->data;
}