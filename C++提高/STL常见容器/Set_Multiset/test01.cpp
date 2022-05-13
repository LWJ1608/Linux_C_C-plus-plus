/**
 * @Author: lwj
 * @Date: 2022-05-12 20:12:32
 * @LastEditTime: 2022-05-12 20:12:33
 * @LastEditors: lwj
 * @Description:set构造和赋值
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Set_Multiset/test01().cpp
 **/
//3.8.1 set基本概念
//简介：
//所有元素都会在插入时自动被排序
//本质：
//set/multiset属于关联式容器，底层结构是用二叉树实现。
//set和multiset区别
//set不允许容器中有重复的元素
//multiset允许容器中有重复的元素
#include <iostream>
#include <set>

void printSet(std::set<int> &s)
{
    for (std::set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

//构造和赋值
void test01()
{
    std::set<int> s1;

    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    printSet(s1);

    //拷贝构造
    std::set<int> s2(s1);
    printSet(s2);

    //赋值
    std::set<int> s3;
    s3 = s2;
    printSet(s3);
}

int main()
{

    test01();
    return 0;
}