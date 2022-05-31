/**
 * @Author: lwj
 * @Date: 2022-05-30 23:42:24
 * @Description:实现双链表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/dobleLinkList/DoubleLinkList.h
 **/
#pragma once
template <typename Type>
class DoubleLinkList
{
private:
    struct Node
    {
    public:
        Type data;   //数据域
        Node *next;  //指向后继结点
        Node *prior; //指向前继结点
        Node(Node *p, const Type &value, Node *n)
        {
            this->data = value;
            this->next = n;
            this->prior = p;
        }
        Node() : prior(NULL), next(NULL) {} //用列表初始化方法初始化
        ~Node() {}
    };
    Node *head, *tail;
    int count;
    Node *getIndex(int i) const; //返回第i元素的前驱
public:
    DoubleLinkList();                                 //构造函数
    ~DoubleLinkList();                                //析构函数
    bool empty() const { return head->next == tail; } //判空
    Type size() const { return count; }               //返回
    void clear();                                     //清空
    void insert(int i, const Type &value);            //在第i个位置插入元素value
    // int search(const Type &value) const;              //在线性表中，查找值为value的元素第一次出现的位序
    void traverse() const; //遍历双链表
    // Type visit(int i) const;                          // 在线性表中，查找位序为i的元素并返回其值
    void remove(int i); //在线性表中，位序为i[0..n-1]的位置删除元素
    // virtual void inverse();                           // 逆置线性表
};

template <typename Type>
DoubleLinkList<Type>::DoubleLinkList() //构造函数
{
    //有两个头结点，头指针和尾指针处各有一个
    head = new Node; //头部头结点
    tail = new Node; //尾部头结点
    head->next = tail;
    tail->prior = head;
    count = 0;
}

template <typename Type>
void DoubleLinkList<Type>::clear() //清空
{
    Node *p = head->next;
    Node *tmp;
    head->next = tail;
    tail->prior = head;
    while (p != tail)
    {
        tmp = p->next;
        delete p;
        p = tmp;
    }
    count = 0;
}

template <typename Type>
DoubleLinkList<Type>::~DoubleLinkList() //析构函数
{
    clear();
    delete head;
    delete tail;
}

template <typename Type>
typename DoubleLinkList<Type>::Node *DoubleLinkList<Type>::getIndex(int i) const //返回指向第i个元素的指针
{
    Node *p = head;
    int m = 0;
    if (i < -1 || i > this->count)
    {
        return nullptr;
    }

    while (m <= i)
    {
        p = p->next;
        m++;
    }
    return p;
}

template <typename Type>
void DoubleLinkList<Type>::insert(int i, const Type &value)
{
    Node *p, *tmp;
    if (i < 0 || i > count) // 合法的插入位置为[0..n]
    {
        std::cout << "outOfRange!" << std::endl;
        return;
    }
    p = getIndex(i);                    // 若i==n则定位到tail指向的尾结点
    tmp = new Node(p->prior, value, p); // tmp插入到p之前
    p->prior->next = tmp;
    p->prior = tmp;
    ++count;
}

template <typename Type>
void DoubleLinkList<Type>::remove(int i) // 在线性表中，位序为i[0..n-1]的位置删除元素
{
    Node *p;
    if (i < 0 || i > count - 1)
    {
        std::cout << "outOfRange!" << std::endl;
        return;
    }

    p = getIndex(i);
    p->prior->next = p->next;  //将i结点的前继的next指向i结点的后继
    p->next->prior = p->prior; //将i结点的后继的prior指向i结点的前继
    delete p;                  //删除i结点
    --count;
}

template <typename Type>
void DoubleLinkList<Type>::traverse() const //遍历双链表
{
    Node *p;
    p = head->next;
    std::cout << "遍历双链表：";

    while (p != tail)
    {
        std::cout << p->data << " ";
        p = p->next;
    }
    std::cout << std::endl;
}
// template <typename Type>
// int DoubleLinkList<Type>::search(const Type &value) const //在线性表中，查找值为value的元素第一次出现的位序
// {
//     Node *p = head->next;
//     int count = 0;
//     while (count <= count - 1 && p != tail)
//     {
//         if (value == p->data)
//         {
//             return count;
//         }
//         p = p->next;
//         ++count;
//     }
// }

// template <typename Type>
// Type DoubleLinkList<Type>::visit(int i) const // 在线性表中，查找位序为i的元素并返回其值
// {
//     if (i < 0 || i > this->count - 1)
//     {
//         std::cout << "outOfRange!" << std::endl;
//         return -1; //找不到
//     }

//     Node *p = this->getIndex(i);
//     return p->data;
// }

// template <typename Type>
// void DoubleLinkList<Type>::inverse() // 逆置线性表
// {
//     Node *p = head->next;
//     Node *tmp;
//     head->next = tail;
//     tail->prior = head;
//     while (p != tail)
//     {
//         tmp = p->next;
//         p->next = head->next;
//         p->prior = head;
//         head->next->prior = p;
//         head->next = p;
//         p = tmp;
//     }
// }