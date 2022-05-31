/**
 * @Author: lwj
 * @Date: 2022-05-30 23:47:19
 * @Description:测试双链表功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/list/dobleLinkList/main.cpp
 **/

#include <iostream>
#include "doubleLinkList.h"
using namespace std;
void DoubleLinkList_test()
{
    DoubleLinkList<int> d1;

    for (int i = 0; i < 4; i++)
    {
        d1.insert(i, i);
    }
    cout << "判空和返回大小测试：" << endl;
    if (d1.empty())
    {
        cout << "双链表为空！" << endl;
    }
    else
    {
        cout << d1.size() << endl;
    }
    d1.traverse();

    cout << "删除函数remove()的测试：" << endl;
    d1.remove(0);
    d1.remove(3);
    d1.traverse();

    // cout << "search()函数的测试：" << endl;
    // cout << "元素3第一次出现的位序为：" << d1.search(3) << endl;

    // cout << "测试逆置功能：" << endl;
    // d1.inverse();
    // d1.traverse();
}
int main()
{
    DoubleLinkList_test(); //双链表测试
    return 0;
}
