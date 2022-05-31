/**
 * @Author: lwj
 * @Date: 2022-05-31 15:08:28
 * @Description:顺序队列的实现
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Queue/seqQueue.h
 **/
#pragma once

template <class T>
class seqQueue
{
private:
    T *data;         //维护数据指针
    int maxSize;     //队列容量
    int begin, end; //分别指向队头和队尾
public:
    seqQueue(int initSize = 100);                                   //构造函数
    ~seqQueue() { delete[] data; }                                  //析构函数
    bool isEmpty() const { return front == rear; }                  //判空
    bool isFull() const { return (rear + 1) % maxSize = front; }    //判满
    void clear() { front = rear = -1; }                             //清空
    void push_(const T &value);                                     //入队
    int size() const { return (rear - front + maxSize) % maxSize; } //返回元素个数
    void resize();                                                  //用于重新定义队列容量
    T pop();                                                        //出队
    T getHead() const;                                              //取队首
};

template <class T>
seqQueue<T>::seqQueue(int initSize)
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

template <class T>
void seqQueue<T>::enQueue(const T &x)
{
    if ((rear + 1) % maxSize == front)
        resize();
    rear = (rear + 1) % maxSize;
    data[rear] = x;
}

template <class T>
T seqQueue<T>::deQueue()
{
    if (empty())
        throw outOfRange();
    front = (front + 1) % maxSize;
    return data[front];
}

template <class T>
T seqQueue<T>::getHead() const //
{
    if (empty())
        throw outOfRange();
    return data[(front + 1) % maxSize];
}

template <class T>
void seqQueue<T>::resize()
{
    T *tmp = data;
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