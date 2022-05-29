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
        Tpye data;  //数据域
        Node *next; //指针域
        int count;  //记录元素个数
        Node() { Node = nullptr; }
        Node(const Tyoe &value, const Node *)
    };

public:
};