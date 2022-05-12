/**
 * @Author: lwj
 * @Date: 2022-05-12 13:41:43
 * @LastEditTime: 2022-05-12 13:41:44
 * @LastEditors: lwj
 * @Description:list容器的插入和删除
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/List/test04.cpp
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
    //两端数据操作
    L1.push_back(2);  //向list容器尾部插入数据
    L1.push_front(1); //向list容器头部插入数据
    printList(L1);
    L1.pop_back();  //从尾部删除一个数据
    L1.pop_front(); //删除头部第一个元素
    printList(L1);

    // insert()从其它位置插入数据
    for (int i = 0; i < 5; i++)
    {
        L1.push_back(i);
    }
    L1.insert(L1.begin(), 88); //在迭代器指向的位置插入一个数据
    printList(L1);
    L1.insert(L1.end(), 3, 99); //在迭代器指向的位置插入3个99
    printList(L1);
    std::list<int> L2(L1);
    L1.insert(L1.begin(), L2.begin(), L2.end()); //在迭代器指向的位置插入L2区间的数据
    printList(L1);
    //清空（clear）和删除数据（eraser）
    L1.erase(L1.begin(),L1.end());//删除迭代器区间的数据
    printList(L1);
    L1.clear();//清空数据
}
int main()
{
    test01();
    return 0;
}