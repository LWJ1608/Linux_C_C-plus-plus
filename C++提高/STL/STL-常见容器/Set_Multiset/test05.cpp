/**
 * @Author: lwj
 * @Date: 2022-05-13 13:23:33
 * @LastEditTime: 2022-05-13 13:23:34
 * @LastEditors: lwj
 * @Description:比较set和multiset区别
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Set_Multiset/test05.cpp
 **/
// * set不可以插入重复数据，而multiset可以
// * set插入数据的同时会返回插入结果，表示插入是否成功
// * multiset不会检测数据，因此可以插入重复数据

#include <iostream>
#include <set>

void test01()
{
    std::set<int> L1;
    std::cout << "set容器插入重复数据测试：" << std::endl;
    // pair对组，第一个参数返回迭代器，第二个返回bool类型，判断数据是否成功
    std::pair<std::set<int>::iterator, bool> ret = L1.insert(10);
    if (ret.second) //插入成功，返回非空
    {
        std::cout << "第一次插入成功" << std::endl;
    }
    else
    {
        std::cout << "第一次插入失败" << std::endl;
    }
    ret = L1.insert(10);
    if (ret.second) //插入成功，返回非空
    {
        std::cout << "第二次插入成功" << std::endl;
    }
    else
    {
        std::cout << "第二次插入失败\n"
                  << std::endl;
    }
    std::cout << "multiset容器插入重复数据测试：" << std::endl;
    std::multiset<int> m; //
    m.insert(10);
    m.insert(10);
    for (std::multiset<int>::iterator it = m.begin(); it != m.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
int main()
{
    test01();
    return 0;
}
