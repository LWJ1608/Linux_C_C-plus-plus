/**
 * @Author: lwj
 * @Date: 2022-05-31 17:19:02
 * @Description:实现链队列
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Queue/linkQueue/linkQueue.h
 **/
#pragma once

template <class T>
class linkQueue : public Queue<T>
{
private:
    struct node
    {
        T data;     //数据
        node *next; //
        node(const T &value, node *p = NULL)
        {
            this->data = value;
            this->next = p;
        }
        node() : next(NULL) {}
        ~node(){};
    };
    node *front, *rear; //分别为队首指针和队尾指针
public:
    linkQueue() { front = rear = NULL; }         //构造函数
    ~linkQueue();                                //析构函数
    bool empty() const { return front == NULL; } //判空
    void clear();                                //清空
    int size() const;                            //返回链队列大小
    void enQueue(const T &value);                //入队
    T deQueue();                                 //出队
    T getHead() const;                           //读队头元素，并返回它的值
};

template <class T>
linkQueue<T>::~linkQueue() //析构函数
{
    node *p;
    while (front)
    {
        p = front;
        front = front->next;
        delete p;
    }
}
template <class T>
void linkQueue<T>::clear() //清空
{
    node *p;
    while (front)
    {
        p = front;
        front = front->next;
        delete p;
    }
    rear = NULL;
}

template <class T>
int linkQueue<T>::size() const //返回链队列大小
{
    node *p;
    p = front;
    int num = 0;
    while (p)
    {
        num++;
        p = p->next;
    }
    return num;
}

template <class T>
void linkQueue<T>::enQueue(const T &value) //入队
{
    if (empty())
    {
        front = rear = new node(value);
    }
    else
    {
        rear->next = new node(value);
        rear = rear->next;
    }
}

template <class T>
T linkQueue<T>::deQueue() //出队并返回其值
{
    if (empty())
        throw outOfRange();
    node *p;
    p = front;
    T value = front->data;
    front = front->next;
    if (empty())
        rear = NULL;
    delete p;
    return value;
}

template <class T>
T linkQueue<T>::getHead() const //读队头元素，并返回它的值
{
    if (empty())
        throw outOfRange();
    return front->data;
}