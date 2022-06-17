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
    // struct Node //二叉树结点
    // {
    //     Type data;                                              //数据
    //     Node *left, *right;                           //分别为左孩子和右孩子
    //     Node() : left(NULL), right(NULL) {}           //无参构造
    //     Node(Type value, Node *left = NULL, Node *rigth = NULL) //有参构造
    //     {
    //         data = value;
    //         left = left;
    //         right = rigth;
    //     }

    //     ~Node(){};
    // };
    struct Node
    {                                       //结点定义
        Node *left, *right;                 //左结点，右结点
        elemType data;                      //数据域 （二叉树结点数）
        Node() : left(NULL), right(NULL) {} //无参构造函数
        Node(elemType value, Node *l = NULL, Node *r = NULL)
        { //有参构造函数
            data = value;
            left = l;
            right = r;
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
    BinTree() : root(NULL) {}
    ~BinTree() { clear(); }
    void clear() //清空
    {
        if (root)
        {
            clear(root);
        }
        root = NULL;
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
    if (t->left)
    {
        clear(t->left);
    } //利用递归完成释放空间的功能
    if (t->right)
    {
        clear(t->right);
    }
    delete t;
}

template <typename Type>
int BinTree<Type>::size(Node *t) const //返回返回结点个数
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + size(t->left) + size(t->right);
}

template <typename Type>
void BinTree<Type>::preOrderCreate(Type flag, Node *&t) //前序法创建二叉树
{
    Type value;        //键盘输入的值
    std::cin >> value; //输入
    if (value != flag)
    {
        t = new Node(value);
        preOrderCreate(flag, t->left);
        preOrderCreate(flag, t->right);
    }
}