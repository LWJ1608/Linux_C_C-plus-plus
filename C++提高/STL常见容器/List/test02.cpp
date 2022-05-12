/**
 * @Author: lwj
 * @Date: 2022-05-11 20:10:40
 * @LastEditTime: 2022-05-11 20:10:40
 * @LastEditors: lwj
 * @Description:list容器赋值
 ** @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/List/test02.cpp
 **/
#include <iostream>
#include <list>
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
    // * `assign(n, elem);`                       //将n个elem拷贝赋值给本身。
    L1.assign(5, 8);
    printList(L1);

    // * `list& operator=(const list &lst);`      //重载等号操作符
    std::list<int> L2;
    L2 = L1;
    printList(L2);

    // * `swap(lst);`                             //将lst与本身的元素互换。
    std::list<int> L3;
    for (int i = 0; i < 5; i++)
    {
        L3.push_back(i);
    }
    L3.swap(L1);
    printList(L1);

    // * `assign(beg, end);`                      //将[beg, end)区间中的数据拷贝赋值给本身。
    std::list<int> L4;
    L4.assign(L1.begin(), L1.end());
    printList(L4);
}
int main()
{
    test01();
    return 0;
}