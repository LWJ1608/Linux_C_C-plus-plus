/**
 * @Author: lwj
 * @Date: 2022-05-12 20:16:52
 * @LastEditTime: 2022-05-12 20:16:53
 * @LastEditors: lwj
 * @Description:set大小和交换
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Set_Multiset/test02.cpp
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

//大小
void test01()
{

    std::set<int> s1;

    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    if (s1.empty())
    {
       std::cout << "s1为空" << std::endl;
    }
    else
    {
        std::cout << "s1不为空" << std::endl;
        std::cout << "s1的大小为： " << s1.size() << std::endl;
    }
}

//交换
void test02()
{
    std::set<int> s1;

    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    std::set<int> s2;

    s2.insert(100);
    s2.insert(300);
    s2.insert(200);
    s2.insert(400);

    std::cout << "交换前" << std::endl;
    printSet(s1);
    printSet(s2);
    std::cout << std::endl;

    std::cout << "交换后" << std::endl;
    s1.swap(s2);
    printSet(s1);
    printSet(s2);
}

int main()
{

    // test01();

    test02();
    return 0;
}