/**
 * @Author: lwj
 * @Date: 2022-05-30 23:42:24
 * @Description:实现双链表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/dobleLinkList/doubleLinkList.h
 **/
#pragma once
template <typename Type>
class doubleLinkList
{
private:
    struct Node
    {
    public:
        Type data;
        Node *next;
        Node *prior;
        Node(Node *p, const Type &value, Node *n)
        {
            this->data = value;
            this->next = n;
            this->prior = p;
        }
        Node() : prior(NULL), next(NULL) {}
        ~Node() {}
    };
    Node *head, *tail;
    int count;
    Node *getIndex(int i) const; //返回第i元素的前驱
public:
    doubleLinkList();                                 //构造函数
    ~doubleLinkList();                                //析构函数
    bool empty() const { return head->next == tail; } //判空
    Type size() const { return count; }               //返回
    void clear();                                     //清空
    void insert(int i, const T &value);               //在第i个位置插入元素value
    int search(const T &value) const;                 //在线性表中，查找值为value的元素第一次出现的位序
    void traverse() const;                            //遍历双链表
    Type visit(int i) const;                          // 在线性表中，查找位序为i的元素并返回其值
    void remove(int i);                               //在线性表中，位序为i[0..n-1]的位置删除元素
    virtual void inverse();                           // 逆置线性表
};

template <typename Type>
doubleLinkList<Type>::doubleLinkList() //构造函数
{
    head = new Node;
    tail = new Node;
    head->next = tail;
    tail->prior = head;
    count = 0;
}

template <typename Type>
void doubleLinkList<Type>::clear() //清空
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
doubleLinkList<Type>::~doubleLinkList() //析构函数
{
    clear();
    delete head;
    delete tail;
}

template <typename Type>
typename doubleLinkList<Type>::Node *doubleLinkList<Type>::getIndex(int i) const //返回指向第i个元素的指针
{
    Node *p = head;
    int m = 0;
    if (i < -1 || i > this->count)
    {
        std::cout << "outOfRange!" << std::endl;
        return nullptr;
    }

    while (m <= i)
    {
        p = p->next;
        m++;
    }
    return p;
}

template <class Type>
void doubleLinkList<Type>::insert(int i, const Type &value) //在第i个位位置插入元素value
{
    Node *p = this->getIndex(i - 1);

    if (i < 0 || i > this->count)
    {
        std::cout << "outOfRange!" << std::endl;
        return;
    }

    Node *q = new Node(p, value, p->next);
    p->next = q;
    p->next->prior = q;
    ++count;
}

template <typename Type>
void doubleLinkList<Type>::insert(int i, const Type &value)
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
void doubleLinkList<Type>::remove(int i) // 在线性表中，位序为i[0..n-1]的位置删除元素
{
    Node *p;
    if (i < 0 || i > count - 1)
    {
        std::cout << "outOfRange!" << std::endl;
        return;
    }

    p = getIndex(i);
    p->prior->next = p->next;
    p->next->prior = p->prior;
    delete p;
    --count;
}

template <typename Type>
void doubleLinkList<Type>::traverse() const //遍历双链表
{
    Node *p;
    p = head->next;
    cout << "遍历双链表：";

    while (p != tail)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
template <typename Type>
int doubleLinkList<Type>::search(const Type &value) const //在线性表中，查找值为value的元素第一次出现的位序
{
    Node *p = head->next;
    int count = 0;
    while (count <= count - 1 && p != tail)
    {
        if (value == p->data)
        {
            return count;
        }
        p = p->next;
        ++count;
    }
}

template <typename Type>
Type doubleLinkList<Type>::visit(int i) const // 在线性表中，查找位序为i的元素并返回其值
{
    if (i < 0 || i > this->count - 1)
    {
        std::cout << "outOfRange!" << std::endl;
        return -1; //找不到
    }

    Node *p = this->getIndex(i);
    return p->data;
}

template <typename Type>
void doubleLinkList<Type>::inverse() // 逆置线性表
{
    Node *p = head->next;
    Node *tmp;
    head->next = tail;
    tail->prior = head;
    while (p != tail)
    {
        tmp = p->next;
        p->next = head->next;
        p->prior = head;
        head->next->prior = p;
        head->next = p;
        p = tmp;
    }
}