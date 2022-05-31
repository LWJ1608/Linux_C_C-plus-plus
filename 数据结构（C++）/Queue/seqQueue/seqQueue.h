/**
 * @Author: lwj
 * @Date: 2022-05-31 15:08:28
 * @Description:循环队列的实现
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Queue/seqQueue.h
 **/
#pragma once
#include <iostream>
#include <assert.h>
template <typename Type>
class seqQueue
{
private:
    Type *data;     //维护数据指针
    int maxSize;    //队列容量
    int begin, end; //分别指向队头和队尾
public:
    seqQueue(int initSize = 100);                                  //构造函数
    ~seqQueue() { delete[] data; }                                 //析构函数
    bool empty() const { return begin == end; }                    //判空
    bool full() const { return (end + 1) % maxSize = begin; }      //判满
    void clear() { begin = end = -1; }                             //清空
    void push(const Type &value);                                  //入队
    int size() const { return (end - begin + maxSize) % maxSize; } //返回元素个数
    void resize();                                                 //用于重新定义队列容量
    Type pop();                                                    //出队
    Type front() const;                                            //取队首
};

template <typename Type>
seqQueue<Type>::seqQueue(int initSize) //构造函数
{
    if (initSize <= 0)
    {
        std::cout << "badSize!" << std::endl; //队列容量有误
        return;
    }
    data = new Type[initSize];
    maxSize = initSize;
    begin = end = -1;
}

template <typename Type>
void seqQueue<Type>::push(const Type &x) //入队
{
    if ((end + 1) % maxSize == begin)
    {
        resize();
    }
    end = (end + 1) % maxSize;
    data[end] = x;
}

template <typename Type>
Type seqQueue<Type>::pop() //出队
{
    if (empty())
    {
        std::cout << "outOfRange!" << std::endl;
        assert(1);
    }
    begin = (begin + 1) % maxSize;
    return data[begin];
}

template <typename Type>
Type seqQueue<Type>::front() const //返回对首元素
{
    if (empty())
    {
        std::cout << "outOfRange!" << std::endl;
        assert(1);
    }
    return data[(begin + 1) % maxSize];
}

template <typename Type>
void seqQueue<Type>::resize() //扩大容量
{
    Type *tmp = data;
    data = new T[2 * maxSize];
    for (int i = 1; i < maxSize; ++i)
    {
        data[i] = tmp[(begin + i) % maxSize];
    }
    begin = 0;
    end = maxSize - 1;
    maxSize = 2 * maxSize;
    delete tmp;
}