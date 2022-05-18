/**
 * @Author: lwj
 * @Date: 2022-05-12 14:18:04
 * @LastEditTime: 2022-05-12 14:18:04
 * @LastEditors: lwj
 * @Description:list容器数据存取
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/List/test05.cpp
 **/
#include <iostream>
#include <list>

//数据存取
void test01()
{
    std::list<int> L1;
    L1.push_back(10);
    L1.push_back(20);

    std::cout << "第一个元素为： " << L1.front() << std::endl;
    std::cout << "最后一个元素为： " << L1.back() << std::endl;

    // list容器的迭代器是双向迭代器，不支持随机访问
    std::list<int>::iterator it = L1.begin();
    // it = it + 1;//错误，不可以跳跃访问，即使是+1
}

int main()
{

    test01();
    return 0;
}