/**
 * @Author: lwj
 * @Date: 2022-05-14 15:03:14
 * @LastEditTime: 2022-05-14 15:03:14
 * @LastEditors: lwj
 * @Description:map容器大小操作
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/map_multimap/test02.cpp
 **/

#include <iostream>
#include <map>

void printMap(std::map<int, int> &m)
{
    for (std::map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        std::cout << "key = " << it->first << "\tvalue = " << it->second << std::endl;
    }
}
void test01()
{
    std::map<int, int> m1;
    m1.insert(std::pair<int, int>(2, 1));
    m1.insert(std::pair<int, int>(3, 2));
    m1.insert(std::pair<int, int>(1, 3));
    m1.insert(std::pair<int, int>(4, 4));
    m1.insert(std::pair<int, int>(5, 5));
    printMap(m1);
    // size();`          //返回容器中元素的数目
    int num = m1.size();
    std::cout << "map容器大小为：" << num << std::endl;

    // empty();`         //判断容器是否为空
    m1.empty();

    // swap(st);       //交换两个集合容器
    std::map<int, int> m2;
    m2.insert(std::pair<int, int>(2, 8));
    m2.insert(std::pair<int, int>(1, 8));
    m2.insert(std::pair<int, int>(5, 8));
    m2.insert(std::pair<int, int>(3, 8));
    m2.insert(std::pair<int, int>(4, 8));
    std::cout << "m2没有swap时：" << std::endl;
    printMap(m2);
    m2.swap(m1); //交换两个集合容器
    std::cout << "m2swap后：" << std::endl;
    printMap(m2);
}
int main()
{
    test01();
    return 0;
}
