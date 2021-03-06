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
    //测试的二叉树先序为：abd**eg***c*fh**i**
    BinTree<char> t1;
    t1.preOrderCreate('*');
    cout << "二叉树结点个数为：" << t1.size() << endl;
    cout << "二叉树高度为：" << t1.height() << endl;
    cout << "二叉树叶子数为：" << t1.leafNum() << endl;
    Node<char> *iNode = t1.findI('c');
    cout << "iNode->data = " << iNode->data << endl;
    cout << "元素c的父结点：" << t1.findParent(iNode)->data << endl;
    cout << "前序遍历二叉树t1：";
    t1.preOrderTraverse();
    cout << "\n中序遍历二叉树t1：";
    t1.inOrederTraverse();
    cout << "\n后序遍历二叉树t1：";
    t1.postOrderTraverse();
    cout << endl;

    BinTree<char> t2;
    t2.preOrderCreate('*');
    bool p = t2.equal(t1.findRoot());
    if (p)
    {
        cout << "相同！" << endl;
    }
    else
    {
        cout << "不相同！" << endl;
    }
}

int main()
{
    test01();
    return 0;
}