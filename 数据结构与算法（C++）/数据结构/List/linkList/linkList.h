/**
 * @Author: lwj
 * @Date: 2022-05-29 16:04:26
 * @Description:实现单链表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/LinkList/LinkList.h
 **/
#pragma once
#include <iostream>
#include <assert.h>

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
    void push_front();                                   // “头插法”创建单链表
    void push_back();                                    // “尾插法”创建单链表
    void inverse();                                      // 逆置线性表
    LinkList *Union(LinkList<Type> *lb);                 //两个单链表合并
};

template <typename Type>
LinkList<Type>::LinkList() //构造函数
{
    head = tail = new Node(); //创建一个空表，只有头结点，如果不需要头结点的话直接head=tail=nullptr;
    this->count = 0;
}

template <typename Type>
LinkList<Type>::~LinkList() //析构函数
{
    clear();
    delete head;
}

template <typename Type>
void LinkList<Type>::clear() //清空单链表，clear()和~LinkList()在于，clear()保留头结点
{
    Node *p, *tmp;
    p = head->next; // head->next指向首元结点
    while (p != nullptr)
    {
        tmp = p;
        p = p->next;
        delete tmp;
    }
    head->next = nullptr;
    tail = head;
    count = 0;
}
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
    if (i < 0 || i > this->count) //能插入的位置i的范围[0~cout]
    {
        std::cout << "outOfRange!" << std::endl;
        return;
    }
    Node *p = this->getIndex(i - 1);    // p指向原来i结点的元素
    Node *q = new Node(value, p->next); // q指向新插入的元素
    p->next = q;                        // p->next指向新插入的元素
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
    if (i < 0 || i > this->count - 1) //只有在[0~count-1]范围内有data
    {
        std::cout << "outOfRange!" << std::endl;
        return;
    }
    pre = this->getIndex(i - 1); //返回指向的结点的指针
    p = pre->next;
    if (p == tail) //当删除的是尾结点时，让倒数第二个结点成为尾结点，尾指针指向它
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
        std::cout << "outOfRange!" << std::endl;
        assert(1);
    }
    while (i > num)
    {
        p = p->next;
        num++;
    }
    return p->data;
}

template <typename Type>
void LinkList<Type>::push_front() // “头插法”创建单链表,从首元结点开始插入
{
    Node *p = nullptr;
    Type value, flag;
    cout << "请输入结束标志flag的值:";
    cin >> flag;
    while (cin >> value, value != flag)
    {
        // cin>>value;
        // if(value==flag)
        // {
        //     break;
        // }
        p = new Node(value, head->next);
        head->next = p;
        if (head == tail) //成立说明表为空，此时头指针和尾指针现在都指向头结点，
        {
            tail = p;
        }
        count++;
    }
}

template <typename Type>
void LinkList<Type>::push_back() //尾插法
{
    Node *p;
    int value, flag;
    cin >> flag;

    while (cin >> value, flag != value)
    {
        p = new Node(value, nullptr);
        tail->next = p;
        tail = p;
        count++;
    }
}
//逆置单链表思路，先用头指针和头结点构建一个空表，然后把其它结点反着插入空表，参考一下头插法
template <typename Type>
void LinkList<Type>::inverse() // 逆置线性表
{
    Node *p, *tmp;
    p = head->next;       // 工作指针p记录首元结点位置
    head->next = nullptr; //让头结点的next指向空，构成空表
    if (p)                //如果p为空，说明表为空
    {
        tail = p;
    }
    while (p) //不为空表时
    {
        tmp = p->next;        // 指向旧首元结点的后继（下一个）
        p->next = head->next; // p->next指向头结点的next指向的位置
        head->next = p;       // 然后头结点的next指向刚插入的结点
        p = tmp;              //工作指针p重新指向其它未插入结点的开始位置
    }
}

// 两个单链表合并，如果两个表递增都是递增排序好的，合并后的表还是保证递增排序
//合并思想是尾插法
template <typename Type>
LinkList<Type> *LinkList<Type>::Union(LinkList<Type> *lb)
{
    Node *pa, *pb, *pc;        // 分别是链表la、lb、lc的工作指针
    LinkList<Type> *lc = this; // lc利用la空间，将lb合并进来,this是const 指针，它指向当前对象，通过它可以访问当前对象的所有成员
    pa = head->next;
    head->next = nullptr; // la表头结点的指针域置为nullptr，构成空链表
    pb = (lb->head)->next;
    (lb->head)->next = nullptr; // lb表头结点的指针域置为nullptr，构成空链表
    pc = lc->head;

    while (pb && pa)
    {
        if (pa->data <= pb->data)
        {
            pc->next = pa;
            pc = pa;
            pa = pa->next;
        }
        else
        {
            pc->next = pb;
            pc = pb;
            pb = pb->next;
        }
    }
    if (pa)
    {
        pc->next = pa;
        lc->tail = tail;
    }
    else
    {
        pc->next = pb;
        lc->tail = lb->tail;
    }
    lc->count = count + lb->count;
    delete lb;
    return lc;
}
