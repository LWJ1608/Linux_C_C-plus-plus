/**
 * @Author: lwj
 * @Date: 2022-05-12 20:38:57
 * @LastEditTime: 2022-05-12 20:38:58
 * @LastEditors: lwj
 * @Description:set插入和删除
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Set_Multiset/test03.cpp
 **/
#include<iostream>
#include <set>

void printSet(std::set<int> &s)
{
    for (std::set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

//插入和删除
void test01()
{
    std::set<int> s1;
    //插入
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    printSet(s1);

    //删除
    s1.erase(s1.begin());
    printSet(s1);

    s1.erase(30);
    printSet(s1);

    //清空
    // s1.erase(s1.begin(), s1.end());
    s1.clear();
    printSet(s1);
}

int main()
{

    test01();
    return 0;
}