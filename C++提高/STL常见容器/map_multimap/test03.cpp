/**
 * @Author: lwj
 * @Date: 2022-05-14 15:34:36
 * @LastEditTime: 2022-05-14 15:34:37
 * @LastEditors: lwj
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/map_multimap/test03.cpp
 **/
// - `insert(elem);`           //在容器中插入元素。
// - `clear();`                    //清除所有元素
// - `erase(pos);`              //删除pos迭代器所指的元素，返回下一个元素的迭代器。
// - `erase(beg, end);`    //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
// - `erase(key);`            //删除容器中值为key的元素。

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
    m1.clear(); //清空所有元素

    std::map<int, int> m2;
    m2.insert(std::pair<int, int>(2, 8));
    m2.insert(std::pair<int, int>(1, 8));
    m2.insert(std::pair<int, int>(5, 8));
    m2.insert(std::pair<int, int>(3, 8));
    m2.insert(std::pair<int, int>(4, 8));

    m2.erase(m2.begin());           //删除pos迭代器所指的元素，返回下一个元素的迭代器。
    m2.erase(m2.begin(), m2.end()); //删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器。
    m2.erase(2);                    //删除容器中值为key的元素。
}
int main()
{
    test01();
    return 0;
}