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
    struct Node //二叉树结点
    {
        Type data;                                                        //数据
        Node *leftChild;                                                  //左孩子指针
        Node *rightChild;                                                 //右孩子
        Node() : data(Type()), leftChild(nullptr), rightChild(nullptr) {} //无参构造
        Node() :
    };
};
