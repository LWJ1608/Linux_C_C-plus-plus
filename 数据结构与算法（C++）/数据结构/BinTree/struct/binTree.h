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
    int height(Node *t) const;
    int leafNum(Node *t) const;
    Node *findLeft(Node *t) const;                 //求当前节点的左孩子
    Node *findRight(Node *t) const;                //求当前节点的右孩子
    Node *findI(const Type &value, Node *t) const; //查找当前节点
    Node *findParent(Node *t) const;               //查找当前节点的父节点
    bool equal(Node *t1, Node *t2) const;          //两个二叉树是否相同的比较
    Node *copy(Node *t) const;                     //复制一个二叉树
    void preOrder(Node *t) const;                  //递归前序遍历
    void inOrder(Node *t) const;                   //递归中序遍历
    void postOrder(Node *t) const;                 //递归后序遍历
    void preOrderCreate(Type flag, Node *&t);      //前序法创建二叉树

    //////////////////////以下为外部接口////////////////////////
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
    int size() const //返回返回结点个数
    {
        if (root)
            return 0;
        return size(root);
    }
    int height() const //返回二叉树高度
    {
        if (root)
            return 0;
        return height(root);
    }
    int leafNum() const //返回二叉树叶子数
    {
        if (root)
            return 0;
        return leafNum(root);
    } 
    Node *findLeft() const//查找左孩子
    {
        if (root)
            return nullptr;
        return findLeft(root);
    }
    Node *findRight() const //查找右孩子
    {
        if (root)
            return nullptr;
        return findRight(root);
    }
        void preOrderTraverse() const //前序遍历
    {
        if (root)
            preOrder(root);
    }
    void inOrederTraverse() const //中序遍历
    {
        if (root)
            inOrder(root);
    }
    void postOrderTraverse() const //后序遍历
    {
        if (root)
            postOrder(root);
    }
    void preOrderCreate(Type flag) //前序法创建二叉树
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
    if (t == nullptr)
    {
        return 0;
    }
    return 1 + size(t->leftChild) + size(t->rightChild);
}

template <typename Type>
int BinTree<Type>::height(Node *t) const //返回二叉树高度
{
    if (t == nullptr)
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
    if (t == nullptr)
    {
        return 0;
    }
    else if (t->leftChild == nullptr && t->rightChild == nullptr) //根就是叶子的时候
    {
        return 1;
    }
    else
    {
        return leafNum(t->leftChild) + leafNum(t->rightChild);
    }
}

template <typename Type>
BinTree<Type>::Node *BinTree<Type>::findLeft(Node *t) const //求当前节点的左孩子
{
    if (t->leftChild)
    {
        return nullptr;
    }
    return t->leftChild;
}

template <typename Type>
BinTree<Type>::Node *BinTree<Type>::findRight(Node *t) const //求当前节点的右孩子
{
    if (t->rightChild)
    {
        return nullptr;
    }
    return t->rightChild;
}

template <typename Type>
void BinTree<Type>::preOrder(Node *t) const //递归前序遍历
{
    if (t)
    {
        std::cout << t->data << ' '; //前序是从根开始遍历，所以输出语句放在第一条
        preOrder(t->leftChild);
        preOrder(t->rightChild);
    }
}

template <typename Type>
void BinTree<Type>::inOrder(Node *t) const //递归中序遍历
{
    if (t)
    {
        inOrder(t->leftChild);
        std::cout << t->data << ' ';
        inOrder(t->rightChild);
    }
}
template <typename Type>
void BinTree<Type>::postOrder(Node *t) const
{
    if (t)
    {
        postOrder(t->leftChild);
        postOrder(t->rightChild);
        std::cout << t->data << ' ';
    }
}

//使用带外部节点‘*’，‘*’号不存储，用来把二叉树补成一个完全二叉树，这样更好理解
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