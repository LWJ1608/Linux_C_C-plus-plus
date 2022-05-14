/**
 * @Author: lwj
 * @Date: 2022-05-14 16:22:55
 * @LastEditTime: 2022-05-14 16:22:55
 * @LastEditors: lwj
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/map_multimap/test05.cpp
 **/
#include <iostream>
#include <map>

class MyCompare
{
public:
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }
};

void test01()
{
    //默认从小到大排序
    //利用仿函数实现从大到小排序
    std::map<int, int, MyCompare> m;

    m.insert(std::make_pair(1, 10));
    m.insert(std::make_pair(2, 20));
    m.insert(std::make_pair(3, 30));
    m.insert(std::make_pair(4, 40));
    m.insert(std::make_pair(5, 50));

    for (std::map<int, int, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
    {
        std::cout << "key:" << it->first << " value:" << it->second << std::endl;
    }
}
int main()
{

    test01();
    return 0;
}