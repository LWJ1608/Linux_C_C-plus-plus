/**
 * @Author: lwj
 * @Date: 2022-06-17 09:10:37
 * @Description:二叉树方法的实现(结点类型是结构体实现)
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/数据结构/BinTree/binTree.h
 **/
#pragma once
#include <iostream>

template <typename Type>
class BinTree //二叉树类
{
private:
    struct Node //二叉树结点
    {
        Type data;                                                    //数据
        Node *leftChild, *rightChild;                                 //分别为左孩子和右孩子
        Node() : leftChild(nullptr), rightChild(nullptr) {}           //无参构造
        Node(Type value, Node *left = nullptr, Node *rigth = nullptr) //有参构造
        {
            data = value;
            leftChild = left;
            rightChild = rigth;
        }

        ~Node(){};
    };
    Node *root; //指向二叉树的根

    /////////////////////以下为内部接口//////////////////////
private: //以下为内部接口
    void clear(Node *t);
    int size(Node *t) const;
    void preOrderCreate(Type flag, Node *&t); //前序法创建二叉树

    //////////////////////以下为外部接口////////////////////////
public:
    BinTree() : root(nullptr) {}
    ~BinTree() { clear(); }
    void clear() //清空
    {
        if (root)
        {
            clear(root);
        }
        root = nullptr;
    }
    int size() const { return size(root); } //返回返回结点个数
    void preOrderCreate(Type flag)          //前序法创建二叉树
    {
        preOrderCreate(flag, root);
    }
};
/////////////////////////////////////////////////////////////////////
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
void BinTree<Type>::preOrderCreate(Type flag, Node *&t) //前序法创建二叉树
{
    Type value;        //键盘输入的值
    std::cin >> value; //输入
    if (value != flag)
    {
        t = new Node(value);
        preOrderCreate(flag, t->leftChild);
        preOrderCreate(flag, t->rightChild);
    }
}