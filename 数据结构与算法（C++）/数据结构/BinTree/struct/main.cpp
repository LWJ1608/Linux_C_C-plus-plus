/**
 * @Author: lwj
 * @Date: 2022-06-17 09:10:47
 * @Description:测试二叉树功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/数据结构/BinTree/main.cpp
 **/

#include "binTree.h"
#include <iostream>
using namespace std;
void test01()
{

    BinTree<char> t1;
    t1.preOrderCreate('*');
    cout << "二叉树结点个数为：" << t1.size() << endl;
    cout << "二叉树高度为：" << t1.height() << endl;
    cout << "二叉树叶子数为：" << t1.leafNum() << endl;
    t1.findI('c');
    cout << "root结点的孩子的值分别为：\n"
         << "leftChild:" << t1.findLeft(t1.findI('c'))->data << "\n"
         << "rightChild:" << t1.findRight(t1.findI('c'))->data;
    // cout << "前序遍历二叉树：";
    // t1.preOrderTraverse();
    // cout << "\n中序遍历二叉树：";
    // t1.inOrederTraverse();
    // cout << "\n后序遍历二叉树：";
    // t1.postOrderTraverse();
    // cout << endl;
}

int main()
{
    test01();
    return 0;
}