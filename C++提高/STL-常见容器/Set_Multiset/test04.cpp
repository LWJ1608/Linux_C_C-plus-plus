/**
 * @Author: lwj
 * @Date: 2022-05-12 20:41:15
 * @LastEditTime: 2022-05-12 20:41:15
 * @LastEditors: lwj
 * @Description:set查找和统计
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Set_Multiset/test04.cpp
 **/
#include<iostream>
#include <set>

//查找和统计
void test01()
{
    std::set<int> s1;
    //插入
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    //查找
    std::set<int>::iterator pos = s1.find(30);

    if (pos != s1.end())
    {
        std::cout << "找到了元素 ： " << *pos << std::endl;
    }
    else
    {
        std::cout << "未找到元素" << std::endl;
    }

    //统计
    int num = s1.count(30);
    std::cout << "num = " << num << std::endl;
}

int main()
{

    test01();
    return 0;
}