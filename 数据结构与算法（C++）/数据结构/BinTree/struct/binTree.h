/**
 * @Author: lwj
 * @Date: 2022-06-17 09:10:37
 * @Description:二叉树方法的实现(结点类型是结构体实现)
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/数据结构/BinTree/binTree.h
 **/
#pragma once
#include <stack>
#include <queue>
#include <iostream>

template <typename Type>
class BinTree //二叉树类
{
private:
    struct Node //二叉树结点
    {
        Type data;                                                        //数据
        Node *leftChild;                                                  //左孩子指针
        Node *rightChild;                                                 //右孩子
        Node() : data(Type()), leftChild(nullptr), rightChild(nullptr) {} //无参构造
        Node(const Type value, const Node *left = nullptr, const Node *rigth = nullptr)
            : data(value), leftChild(left), rightChild(rigth) {} //有参构造
        ~Node(){};
    };
    Node *root; //指向二叉树的根
private:        //以下为内部接口
    void clear(Node *t);
    int size(Node *t) const;
    int hight(Node *t) const;
    int leafNum(Node *t) const;
    void preOrder(Node *t) const;             //前序遍历
    void inOreder(Node *t) const;             //中序遍历
    void postOrder(Node *t) const;            //后序遍历
    void preOrderCreate(Type flag, Node *&t); //前序法创建二叉树

public:                                       //以下为外部接口
    void clear();                             //清空
    int size() const;                         //返回返回结点个数
    int hight() const;                        //返回二叉树高度
    int leafNum() const;                      //返回二叉树叶子数
    void preOrder() const;                    //前序遍历
    void inOreder() const;                    //中序遍历
    void postOrder() const;                   //后序遍历
    void preOrderCreate(Type flag, Node *&t); //前序法创建二叉树
};
