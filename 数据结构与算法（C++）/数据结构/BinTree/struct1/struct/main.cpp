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
}

int main()
{
    test01();
    return 0;
}