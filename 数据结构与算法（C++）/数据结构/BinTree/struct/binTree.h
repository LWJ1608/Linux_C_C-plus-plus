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
    int height(Node *t) const;
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
    void clear()                                   //清空
    {
        if (root)
        {
            clear(root);
        }
        root = nullptr;
    }
    int size() const { size(root); }       //返回返回结点个数
    int height() const { height(root); }   //返回二叉树高度
    int leafNum() const { leafNum(root); } //返回二叉树叶子数
    void preOrderTraverse() const;         //前序遍历
    void inOrederTraverse() const;         //中序遍历
    void postOrderTraverse() const;        //后序遍历
    void preOrderCreate(Type flag)         //前序法创建二叉树
    {
        preOrderCreate(flag, root);
    }
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
    if (root == nullptr)
    {
        return 0;
    }
    return 1 + size(t->leftChild) + size(t->rightChild);
}

template <typename Type>
int BinTree<Type>::height(Node *t) const //返回二叉树高度
{
    if (root == nullptr)
    {
        return 0;
    }
    else
    {
        int l = height(t->leftChild);
        int r = height(t->rightChild);
        return 1 + (l > r ? l : r);
    }
}
template <typename Type>
int BinTree<Type>::leafNum(Node *t) const //返回二叉树叶子数
{
    if (root == nullptr)
    {
        return 0;
    }
    if (root->leftChild == nullptr && root->rightChild == nullptr)
    {
        return 1 + leafNum(t->leftChild) + leafNum(t->rightChild);
    }
}
template <typename Type>
void BinTree<Type>::preOrderCreate(Type flag, Node *&t) //前序法创建二叉树
{
    Type value;        //键盘输入的值
    std::cin >> value; //输入
    if (value != flag)
    {
        t = new Node(value);
        preOrderCreate(flag, root->leftChild);
        preOrderCreate(flag, root->rightChild);
    }
}