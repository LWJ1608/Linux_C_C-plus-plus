/**
 * @Author: lwj
 * @Date: 2022-05-29 16:04:26
 * @Description:实现单链表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/linkList/linkList.h
 **/
#include <iostream>
#include <assert.h>
using namespace std;

template <typename Type>
class LinkList
{
private:
    struct Node
    {
    public:
        Type data;              //数据域,所要的存储的数据
        Node *next;             //指针域
        Node(Node *p = nullptr) //主要用于创建Node类型的指针
        {
            next = p;
        }
        Node(const Type &value, Node *p = nullptr) //用储存数据的结点
        {
            data = value;
            next = p;
        }
    };
    Node *head;                  //头指针，指向表头
    Node *tail;                  //尾指针，指向表尾
    int count;                   //记录元素个数
    Node *getIndex(int i) const; // 返回指向单链表中第i个元素的指针,因为只在当前文件使用，所以放在私有中
public:
    LinkList();           // 构造函数
    ~LinkList();          // 析构函数
    void clear();         // 将单链表清空，使之成为空表
    bool isEmpty() const; // 判空
    // int size() const;                      // 返回单链表的当前实际长度
    void insert(int i, const Type &value); // 在位置i上插入一个元素value，表的长度增1
    // void remove(int i);                    // 删除位置i上的元素value，若删除位置合法，表的长度减1
    // int search(const Type &value) const;   // 查找值为value的元素第一次出现的位序
    // Type visit(int i) const;               // 访问位序为i的元素值，“位序”0表示第一个元素，类似于数组下标
    // void traverse() const;                 // 遍历单链表
    // void headCreate();                                // “头插法”创建单链表
    // void tailCreate();                                // “尾插法”创建单链表
    // void inverse();                                   // 逆置单链表
    // int prior(const Type &value) const;           // 查找值为value的元素的前驱
    // LinkList *Union(linkList<Type> *lb);          //合并两个表
};
template <typename Type>
LinkList<Type>::LinkList() // 构造函数
{
    int count = 0;
    head = tail = new Node(); //创建有头结点的空表，头结点不放数据
}
template <typename Type>
LinkList<Type>::~LinkList() // 析构函数
{
    clear();
    delete head; // clear()后还剩下头结点，head指向头结点，释放头结点的空间
}
template <typename Type>
void LinkList<Type>::clear() // 将单链表清空，使之成为空表
{
    Node *p = head->next; // head->next指向首元结点结点，
    Node *tmp = nullptr;
    while (p)
    {
        tmp = p;
        p = p->next;
        delete tmp;
    }
    head->next = nullptr; //头结点指向空指针
    head = tail;
    count = 0;
}
template <typename Type>
bool LinkList<Type>::isEmpty() const // 判空
{
    return head->next == nullptr;
}
// template <typename Type>
// int LinkList<Type>::size() const // 返回单链表的当前实际长度
// {
//     return count;
// }
template <typename Type>
typename LinkList<Type>::Node *LinkList<Type>::getIndex(int i) const
{
    // i的范围[-1 ~count], -1是头结点的位置
    if (i < -1 || i > count - 1)
    {
        return nullptr;
    }
    Node *tmp = head;
    int num = 0;
    while (num <= i)
    {
        tmp = tmp->next;
        num++;
    }
    return tmp;
}

template <typename Type>
void LinkList<Type>::insert(int i, const Type &value) // 在位置i上插入一个元素value，表的长度增1
{
    if (i < 0 || i > count)
    {
        std::cout << "位置错误！" << std::endl;
        return;
    }

    Node *p = nullptr;
    Node *q = nullptr;
    p = getIndex(i - 1); // p是位序为i的结点的前驱
    q = new Node(value, p->next);
    p->next = q;

    if (p == tail)
    {
        tail = q; // 插入点在表尾，插入结点成为新的尾结点
    }
    count++;
}

// template <typename Type>
// void LinkList<Type>::remove(int i)
// {
//     if (i < 0 || i > count - 1)
//     {
//         std::cout << "位置错误！" << std::endl;
//     }
//     Node *pre, *p;
//     pre = getIndex(i - 1);
//     p = pre->next; // p是真正待删结点
//     if (p == tail)
//     { // 待删结点为尾结点，则修改尾指针
//         tail = pre;
//         pre->next = nullptr;
//         delete p;
//     }
//     else
//     { // 删除结点p 并修改指针
//         pre->next = p->next;
//         delete p;
//     }
//     count--;
// }
// template <typename Type>
// int LinkList<Type>::search(const Type &value) const // 查找值为value的元素第一次出现的位序
// {
//     Node *p = head->next;
//     int num = 0; // 首元结点的位序为0
//     while (p != nullptr && p->data != value)
//     {
//         p = p->next;
//         num++;
//     }
//     if (p == nullptr)
//     {
//         return -1; // 查找失败返回-1，这里-1并非头节点
//     }
//     else
//     {
//         return num;
//     }
// }
// template <typename Type>
// Type LinkList<Type>::visit(int i) const // 访问位序为i的元素值，“位序”0表示第一个元素，类似于数组下标
// {
//     if (i < 0 || i > count - 1)
//     {
//         std::cout << "位置错误！" << std::endl;
//     }
//     Node *p = head->next;
//     int num = 0; // 首元结点位序为0
//     while (num < i)
//     {
//         p = p->next;
//         num++;
//     }
//     return p->data;
// }
// template <typename Type>
// void LinkList<Type>::traverse() const // 遍历单链表
// {
//     Node *p = head->next;
//     std::cout << "traverse:";
//     while (p != nullptr)
//     {
//         std::cout << p->data << "  ";
//         p = p->next;
//     }
//     std::cout << std::endl;
// }
// void headCreate();                                // “头插法”创建单链表
// void tailCreate();                                // “尾插法”创建单链表
// void inverse();                                   // 逆置单链表
// int prior(const elemType &value) const;           // 查找值为value的元素的前驱
// LinkList *Union(linkList<elemType> *lb);          // 合并两个表