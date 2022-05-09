/**
 * @Author: lwj
 * @Date: 2022-05-09 09:25:20
 * @LastEditTime: 2022-05-09 09:25:20
 * @LastEditors: lwj
 * @Description:deque容器的构造函数
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Deque/test01.cpp
 **/
#include <iostream>
#include <deque>

void printDeque(std::deque<int> &d)
{
    for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void test01()
{
    std::deque<int> d1; //默认构造
    for (int i = 0; i < 6; i++)
    {
        d1.push_back(i); //插入数据
    }
    std::deque<int> d2(d1); //拷贝构造
    printDeque(d2);

    std::deque<int> d3(d2.begin(), d2.end()); //段拷贝构造
    printDeque(d3);

    std::deque<int> d4(6, 9); //构造函数将n个elem拷贝给本身
    printDeque(d4);
}
int main()
{
    test01();
    return 0;
}