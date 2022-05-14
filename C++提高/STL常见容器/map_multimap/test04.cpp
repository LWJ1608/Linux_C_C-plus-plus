/**
 * @Author: lwj
 * @Date: 2022-05-14 15:43:59
 * @LastEditTime: 2022-05-14 15:44:00
 * @LastEditors: lwj
 * @Description:map查找和统计
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/map_multimap/test04.cpp
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
    //插入数据
    m1.insert(std::pair<int, int>(2, 1));
    m1.insert(std::pair<int, int>(3, 2));
    m1.insert(std::pair<int, int>(1, 3));
    m1.insert(std::pair<int, int>(4, 4));
    m1.insert(std::pair<int, int>(5, 5));
    printMap(m1);

    //查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
    std::map<int, int>::iterator pot = m1.find(2);
    if (pot != m1.end())
    {
        std::cout << "key存在等于2的数" << std::endl;
    }
    else
    {
        std::cout << "不存在" << std::endl;
    }
    //统计key的元素个数
    int num = m1.count(3);
    std::cout << "key = 3的个数为：" << num << std::endl;
}
int main()
{
    test01();
    return 0;
}