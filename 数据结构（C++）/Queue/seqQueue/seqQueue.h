/**
 * @Author: lwj
 * @Date: 2022-05-31 15:08:28
 * @Description:顺序队列的实现
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Queue/seqQueue.h
 **/
#pragma once

template <class T>
class seqQueue : public Queue<T>
{
private:
    T *data;         //
    int maxSize;     //ѭ������
    int front, rear; //�ֱ��Ƕ��ף���β��ַָ��
    void resize();   //����ѭ����������
public:
    seqQueue(int initSize = 100);
    ~seqQueue() { delete[] data; }                                  //��������
    bool empty() const { return front == rear; }                    //�п�
    bool full() const { return (rear + 1) % maxSize = front; }      //����
    void clear() { front = rear = -1; }                             //���
    void enQueue(const T &value);                                   //���
    int size() const { return (rear - front + maxSize) % maxSize; } //
    T deQueue();                                                    //����
    T getHead() const;                                              //���ض���Ԫ�أ����ı�����±�
};

template <class T>
seqQueue<T>::seqQueue(int initSize)
{
    if (initSize <= 0)
        throw badSize();
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
T seqQueue<T>::getHead() const // ���ض���Ԫ�أ����ƶ�����ָ��
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