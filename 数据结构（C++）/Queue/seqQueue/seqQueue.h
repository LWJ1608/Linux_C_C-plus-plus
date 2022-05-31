/**
 * @Author: lwj
 * @Date: 2022-05-31 15:08:28
 * @Description:循环队列的实现
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Queue/seqQueue.h
 **/
#pragma once
#include <iostream>

template <typename Type>
class seqQueue
{
private:
    Type *data;     //维护数据指针
    int maxSize;    //队列容量
    int begin, end; //分别指向队头和队尾
public:
    seqQueue(int initSize = 100);                                   //构造函数
    ~seqQueue() { delete[] data; }                                  //析构函数
    bool empty() const { return front == rear; }                    //判空
    bool full() const { return (rear + 1) % maxSize = front; }      //判满
    void clear() { front = rear = -1; }                             //清空
    void push(const Type &value);                                   //入队
    int size() const { return (rear - front + maxSize) % maxSize; } //返回元素个数
    void resize();                                                  //用于重新定义队列容量
    Type pop();                                                     //出队
    Type front() const;                                             //取队首
};

template <typename Type>
seqQueue<Type>::seqQueue(int initSize) //构造函数
{
    if (initSize <= 0)
    {
        std::cout << "badSize!" << std::endl; //队列容量有误
        return;
    }
    data = new T[initSize];
    maxSize = initSize;
    front = rear = -1;
}

template <typename Type>
void seqQueue<Type>::push(const Type &x) //入队
{
    if ((rear + 1) % maxSize == front)
        resize();
    rear = (rear + 1) % maxSize;
    data[rear] = x;
}

template <typename Type>
Type seqQueue<Type>::pop() //出队
{
    if (empty())
    {
        std::cout << "outOfRange!" << std::endl;
        return nullptr;
    }
    front = (front + 1) % maxSize;
    return data[front];
}

template <typename Type>
Type seqQueue<Type>::front() const //返回对首元素
{
    if (empty())
    {
        throw outOfRange();
    }
    return data[(front + 1) % maxSize];
}

template <typename Type>
void seqQueue<Type>::resize() //扩大容量
{
    Type *tmp = data;
    data = new T[2 * maxSize];
    for (int i = 1; i < maxSize; ++i)
    {
        data[i] = tmp[(front + i) % maxSize];
    }
    front = 0;
    rear = maxSize - 1;
    maxSize = 2 * maxSize;
    delete tmp;
}