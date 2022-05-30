/**
 * @Author: lwj
 * @Date: 2022-05-29 16:04:26
 * @Description:实现单链表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/LinkList/LinkList.h
 **/
#pragma once
#include <iostream>

template <typename Type>
class LinkList //单链表
{
private:
    //这里我用结构体来做结点，也可以在LinkList类外在创建一个类实现，
    //类实现的话用到友元类，有兴趣的可以自己实现一下
    struct Node
    {
    public:
        Type data;                                //数据域
        Node *next;                               //指针域
        Node(const Type value, Node *p = nullptr) //结构体Node的两个参数的构造函数
        {
            this->data = value;
            this->next = p;
        }
        Node(Node *p = nullptr) //一个参数的构造函数,用创建头结点之类的使用
        {
            this->next = p;
        }
    };
    Node *head;                  //头指针
    Node *tail;                  //尾指针
    int count;                   //元素个数
    Node *getIndex(int i) const; //返回指向第i个元素的指针

public:
    LinkList();                                          //构造函数
    ~LinkList();                                         //析构函数
    bool empty() const { return head->next == nullptr; } //判空
    void clear();                                        //清空单链表
    int size() const { return count; }                   //返回元素个数
    void insert(int i, const Type &value);               //在第i个位置插入value
    void remove(int i);                                  //删除第i个元素
    int search(const Type &value) const;                 //查找value第一次出现的下标
    void traverse() const;                               //遍历
    Type visit(int i) const;                             // 在线性表中，查找位序为i的元素并返回其值
    // void headCreate();                                   // “头插法”创建单链表
    // void tailCreate();                                   // “尾插法”创建单链表
    // void inverse();                                      // 逆置线性表
    // LinkList *Union(LinkList<Type> *lb);                 //两个单链表合并
};

template <typename Type>
LinkList<Type>::LinkList() //构造函数
{
    head = tail = new Node();
    this->count = 0;
}

template <typename Type>
LinkList<Type>::~LinkList() //析构函数
{
    clear();
    delete head;
}

template <typename Type>
void LinkList<Type>::clear() //清空单链表
{
    Node *p, *temp;
    p = head->next;
    while (p != nullptr)
    {
        temp = p;
        p = p->next;
        delete temp;
    }
    head->next = nullptr;
    tail = head;
    count = 0;
}
//
//
template <typename Type>
typename LinkList<Type>::Node *LinkList<Type>::getIndex(int i) const //返回指向第i个元素的指针
{
    Node *p = head;
    if (i < -1 || i > this->count - 1)
        return nullptr;

    int num = 0;
    while (num <= i)
    {
        p = p->next;
        num++;
    }
    return p;
}

template <typename Type>
void LinkList<Type>::insert(int i, const Type &value) //在第i个位置插入value
{
    if (i < 0 || i > this->count)
    {
        std::cout << "outOfRange!" << std::endl;
        // return;
    }
    Node *p = this->getIndex(i - 1);
    Node *q = new Node(value, p->next);
    p->next = q;
    if (p == tail)
    {
        tail = q;
    }
    this->count++;
}

template <typename Type>
void LinkList<Type>::remove(int i) //删除第i个元素
{
    Node *pre, *p;
    if (i < 0 || i > this->count - 1)
    {
        std::cout << "outOfRange!" << std::endl;
        return;
    }
    pre = this->getIndex(i - 1);
    p = pre->next;
    if (p == tail)
    {
        tail = pre;
        pre->next = nullptr;
        delete p;
    }
    else
    {
        pre->next = p->next;
        delete p;
        this->count--;
    }
}

template <typename Type>
int LinkList<Type>::search(const Type &value) const //查找value第一次出现的下标
{
    Node *p = head->next;
    int num = -1;
    while (p != nullptr && p->data != value)
    {
        p = p->next;
        num++;
    }
    if (p->next == nullptr)
    {
        return -1;
    }
    else
    {
        return num;
    }
}

template <typename Type>
void LinkList<Type>::traverse() const //遍历单链表
{
    Node *p = head->next;
    cout << "traverse：" << endl;
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

template <typename Type>
Type LinkList<Type>::visit(int i) const // 在线性表中，查找位序为i的元素并返回其值
{
    Node *p = head->next;
    int num = 0;
    if (i < 0 || i > this->count - 1)
    {
    }
    while (i > num)
    {
        p = p->next;
        num++;
    }
    return p->data;
}

// template <typename Type>
// void LinkList<Type>::headCreate() // “头插法”创建单链表
// {
//     Node *p;
//     T value, flag;
//     cout << "请输入结束标志flag的值:";
//     cin >> flag;
//     while (cin >> value, value != flag)
//     {
//         p = new Node(value, head->next);
//         head->next = p;
//         if (head == tail)
//             tail = p;
//         count++;
//     }
// }

// template <typename Type>
// void LinkList<Type>::tailCreate() //尾插法
// {
//     Node *p;
//     int value, flag;
//     cin >> flag;

//     while (cin >> value, flag != value)
//     {
//         p = new Node(value, nullptr);
//         tail->next = p;
//         tail = p;
//         count++;
//     }
// }

// template <typename Type>
// void LinkList<Type>::inverse() // 逆置线性表
// {
//     Node *p, *temp;
//     p = head->next;
//     head->next = nullptr;
//     tail = head->next;
//     if (p)
//         tail = p;
//     while (p)
//     {

//         temp = p->next;
//         p->next = head->next;
//         head->next = p;
//         p = temp;
//     }
// }

// template <typename Type>
// LinkList<Type> *LinkList<Type>::Union(LinkList<Type> *lb) //两个单链表融合
// {
//     Node *pa, *pb, *pc;        // 分别是链表la、lb、lc的工作指针
//     LinkList<Type> *lc = this; // lc利用la空间，将lb合并进来
//     pa = head->next;
//     head->next = nullptr; // la表头结点的指针域置为nullptr，构成空链表
//     pb = (lb->head)->next;
//     (lb->head)->next = nullptr; // lb表头结点的指针域置为nullptr，构成空链表
//     pc = lc->head;

//     while (pb && pa)
//     {
//         if (pa->data <= pb->data)
//         {
//             pc->next = pa;
//             pc = pa;
//             pa = pa->next;
//         }
//         else
//         {
//             pc->next = pb;
//             pc = pb;
//             pb = pb->next;
//         }
//     }
//     if (pa)
//     {
//         pc->next = pa;
//         lc->tail = tail;
//     }
//     else
//     {
//         pc->next = pb;
//         lc->tail = lb->tail;
//     }
//     lc->count = count + lb->count;
//     delete lb;
//     return lc;
// }
