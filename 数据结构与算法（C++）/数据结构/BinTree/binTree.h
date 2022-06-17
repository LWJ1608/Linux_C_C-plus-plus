/**
 * @Author: lwj
 * @Date: 2022-06-17 09:10:37
 * @Description:二叉树方法的实现
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/数据结构/BinTree/binTree.h
 **/
#pragma once
#include <stack>
#include <queue>
#include <iostream>

template <typename Type>
class BinTreeNode //二叉树结点类
{
private:
    Type data;                     //数据
    BinTreeNode<Type> *leftChild;  //左孩子
    BinTreeNode<Type> *rightChild; //右孩子

public:
    BinTreeNode() : data(Type()), leftChild(nullptr), rightChild(nullptr); //无参构造
    BinTreeNode(Type data, BinTreeNode<Type> *leftChild)                   //有参构造
};
