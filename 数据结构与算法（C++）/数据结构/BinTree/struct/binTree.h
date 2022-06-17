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

    ////////以下为内部接口////////
private: //以下为内部接口
    void clear(Node *t);
    int size(Node *t) const;
    int hight(Node *t) const;
    int leafNum(Node *t) const;
    //求根节点
    //求当前节点的左孩子
    //求当前节点的右孩子
    //查找当前节点
    //查找当前节点的父节点
    //两个二叉树是否相同的比较
    //复制一个二叉树
    void preOrder(Node *t) const;             //递归前序遍历
    void inOreder(Node *t) const;             //递归中序遍历
    void postOrder(Node *t) const;            //递归后序遍历
    void preOrderCreate(Type flag, Node *&t); //前序法创建二叉树

    ////////以下为外部接口////////
public:
    BinTree() : root(nullptr) {}
    ~BinTree() { clear(); }
    bool empty() const { return root == nullptr; } //判空
    void clear()
    {
        if (root)
        {
            clear(root);
        }
        root = nullptr;
    }                                                 //清空
    int size() const;                                 //返回返回结点个数
    int hight() const;                                //返回二叉树高度
    int leafNum() const;                              //返回二叉树叶子数
    void preOrderTraverse() const;                    //前序遍历
    void inOrederTraverse() const;                    //中序遍历
    void postOrderTraverse() const;                   //后序遍历
    void preOrderCreateTraverse(Type flag, Node *&t); //前序法创建二叉树
};
template <typename Type>
void BinTree<Type>::clear(Node *t) //清空二叉树
{
    if (t->leftChild)
    {
        clear(t->leftChild);
    } //利用递归完成释放空间的功能
    if (t->rightChild)
    {
        clear(t->rightChild);
    }
    delete t;
}

template <typename Type>
int BinTree<Type>::size(Node *t) const //返回返回结点个数
{
    if (!root)
    {
        return 0;
    }
    if (root)
    {
        return 0;
    }
    return 1 + size(t->leftChild) + size(t->rightChild);
}

template <typename Type>
int BinTree<Type>::hight(Node *t) const //返回二叉树高度
{
    int l = hight(t->leftChild);
    int r = hight(t->rightChild);
    return 1 + (l > r ? l : r)
}