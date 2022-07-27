/**
 * @Author: lwj
 * @Date: 2022-05-12 14:25:31
 * @LastEditTime: 2022-05-12 14:25:31
 * @LastEditors: lwj
 * @Description:list容器和排序
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/List/test06.cpp
 **/
#include <iostream>
#include <list>
#include <algorithm>

void printList(std::list<int> &L)
{
    for (std::list<int>::iterator it = L.begin(); it != L.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void test01()
{
    std::list<int> L1;
    for (int i = 0; i < 5; i++)
    {
        L1.push_back(i);
    }
    printList(L1);
    L1.reverse(); //反转
    printList(L1);
    L1.sort();
    printList(L1);
}
int main()
{
    test01();
    return 0;
}