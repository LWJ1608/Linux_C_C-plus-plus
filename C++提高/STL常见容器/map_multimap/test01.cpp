/**
 * @Author: lwj
 * @Date: 2022-05-14 13:33:49
 * @LastEditTime: 2022-05-14 13:33:50
 * @LastEditors: lwj
 * @Description:map构造和赋值
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/map_multimap/test01.cpp
 **/
// * map中所有元素都是pair
// * pair中第一个元素为key（键值），起到索引作用，第二个元素为value（实值）
// * 所有元素都会根据元素的键值自动排序

#include <iostream>
#include <map>

void printMap(std::map<int, int> &m)
{
    for (std::map<int, int>::iterator it = m.begin(); it != m.end(); it++)
    {
        std::cout << "key = " << it->first << "\tvalue = " << it->second << std::endl;
    }
    std::cout << std::endl;
}
void test01()
{
    std::map<int, int> m1; //默认构造
    m1.insert(std::pair<int, int>(2, 5));
    m1.insert(std::pair<int, int>(1, 6));
    m1.insert(std::pair<int, int>(5, 5));
    m1.insert(std::pair<int, int>(3, 3));
    m1.insert(std::pair<int, int>(4, 2));
    printMap(m1);
    std::map<int, int> m2(m1); //拷贝构造
    printMap(m2);
}
int main()
{
    test01();
    return 0;
}