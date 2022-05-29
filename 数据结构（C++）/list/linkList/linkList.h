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
        int count;              //记录元素个数
        Node(Node *p = nullptr) //用于创建Node类型的指针
        {
            next = p;
        }
        Node(const Tyoe &value, Node *p = nullptr) //用储存数据的结点
        {
            data = value;
            next = p;
        }
    };
    Node *head; //头指针，指向表头
    Node *tail; //尾指针，指向表尾

public:
};