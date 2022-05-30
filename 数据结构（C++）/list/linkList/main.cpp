/**
 * @Author: lwj
 * @Date: 2022-05-29 16:04:33
 * @Description:测试单链表
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/linkList/main.cpp
 **/
#include <iostream>
#include "linkList.h"
using namespace std;

void testlinkList()
{
    LinkList<int> L1;
    LinkList<int> L2;

    cout << "插入测试：" << endl;
    // for (int i = 0; i < 4; i++)
    // {
    // L1.insert(1, 3);
    //     L2.insert(1, 3);
    // }

    // cout << "测试插入操作：" << endl;
    // L1.insert(2, 99);
    // // L1.traverse();

    // cout << "测试判空和返回单链表大小：" << endl;
    // if (L1.isEmpty())
    // {
    //     cout << "单链表为空！" << endl;
    // }
    // else
    // {
    //     cout << "单链表不为空,其大小为：" << L1.size() << endl;
    // }

    // cout << "测试删除功能：" << endl;
    // L1.remove(2);
    // // L1.traverse();

    // cout << "测试查找位序为2的元素的值：" << endl;
    // // L1.clear();
    // cout << L1.visit(2) << endl;

    // // cout << "头插法测试：" << endl;
    // // L1.headCreate();
    // // L1.traverse();
    // cout << "测试逆置操作：" << endl;
    // // L1.inverse();
    // // L1.traverse();

    // cout << "测试两个单链表合并操作：" << endl;
    // L1.Union(&L2)->traverse();
}

int main()
{
    testlinkList();
    return 0;
}