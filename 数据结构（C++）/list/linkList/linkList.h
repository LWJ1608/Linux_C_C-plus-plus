/**
 * @Author: lwj
 * @Date: 2022-05-29 16:04:26
 * @Description:实现单链表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/linkList/linkList.h
 **/
#include <iostream>
#include <assert.h>

template <typename Type>
class LinkList
{
private:
    struct Node
    {
    public:
        Tpye data;              //数据域,所要的存储的数据
        Node *next;             //指针域
        Node(Node *p = nullptr) //主要用于创建Node类型的指针
        {
            next = p;
        }
        Node(const Tyoe &value, Node *p = nullptr) //用储存数据的结点
        {
            data = value;
            next = p;
        }
    };
    Node *head;                     //头指针，指向表头
    Node *tail;                     //尾指针，指向表尾
    int count;                      //记录元素个数
    Node *getPosition(int i) const; // 返回指向单链表中第i个元素的指针,因为只在当前文件使用，所以放在私有中
public:
    LinkList();   // 构造函数
    ~LinkList();  // 析构函数
    void clear(); // 将单链表清空，使之成为空表
    // bool isEmpty() const { return head->next == NULL; } // 判空
    // int size() const { return curLength; };           // 返回单链表的当前实际长度
    // void insert(int i, const elemType &value);        // 在位置i上插入一个元素value，表的长度增1
    // void remove(int i);                               // 删除位置i上的元素value，若删除位置合法，表的长度减1
    // int search(const elemType &value) const;          // 查找值为value的元素第一次出现的位序
    // elemType visit(int i) const;                      // 访问位序为i的元素值，“位序”0表示第一个元素，类似于数组下标
    // void traverse() const;                            // 遍历单链表
    // void headCreate();                                // “头插法”创建单链表
    // void tailCreate();                                // “尾插法”创建单链表
    // void inverse();                                   // 逆置单链表
    // int prior(const elemType &value) const;           // 查找值为value的元素的前驱
    // linkList *Union(linkList<elemType> *lb);          //合并两个表
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
    Node *p = head->next; // head->next指向第一个存储数据的结点，
    Node *tmp = nullptr;
    while (p)
    {
        tmp = p;
        p = p->next;
        delete tmp;
    }
}
// bool empty() const { return head->next == NULL; } // 判空
// int size() const { return curLength; };           // 返回单链表的当前实际长度
// void insert(int i, const elemType &value);        // 在位置i上插入一个元素value，表的长度增1
// void remove(int i);                               // 删除位置i上的元素value，若删除位置合法，表的长度减1
// int search(const elemType &value) const;          // 查找值为value的元素第一次出现的位序
// Type visit(int i) const;                      // 访问位序为i的元素值，“位序”0表示第一个元素，类似于数组下标
// void traverse() const;                            // 遍历单链表
// void headCreate();                                // “头插法”创建单链表
// void tailCreate();                                // “尾插法”创建单链表
// void inverse();                                   // 逆置单链表
// int prior(const elemType &value) const;           // 查找值为value的元素的前驱
// linkList *Union(linkList<elemType> *lb);          //合并两个表