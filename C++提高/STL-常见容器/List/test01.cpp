/**
 * @Author: lwj
 * @Date: 2022-05-11 19:49:41
 * @LastEditTime: 2022-05-11 19:49:41
 * @LastEditors: lwj
 * @Description:list（双链表）容器的构造函数
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/List/test01.cpp
 **/
// * `list<T> lst;`                               //list采用采用模板类实现,对象的默认构造形式：
// * `list(beg,end);`                             //构造函数将[beg, end)区间中的元素拷贝给本身。
// * `list(n,elem);`                              //构造函数将n个elem拷贝给本身。
// * `list(const list &lst);`                     //拷贝构造函数。
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
    std::list<int> L1;     //默认构造
    std::list<int> L2(L1); //拷贝构造
    for (int i = 0; i < 5; i++)
    {
        L1.push_back(i);
    }
    printList(L1);
    std::list<int> L3(L1.begin(), L1.end()); //构造函数将[beg, end)区间中的元素拷贝给本身。
    printList(L3);
    std::list<int> L4(5, 8); //构造函数将n个elem拷贝给本身。
    printList(L4);

}
int main()
{
    test01();
    return 0;
}