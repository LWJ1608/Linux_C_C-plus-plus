/**
 * @Author: lwj
 * @Date: 2022-05-09 09:37:26
 * @LastEditTime: 2022-05-09 09:37:26
 * @LastEditors: lwj
 * @Description:deque容器的赋值
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Deque/test02.cpp
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
    std::deque<int> d1;
    for (int i = 1; i < 6; i++)
    {
        d1.push_back(i); //插入数据
    }
    printDeque(d1);
    std::deque<int> d2;
    d2=d1;//等号重载方式赋值
    printDeque(d2);

    std::deque<int> d3;
    d3.assign(d2.begin(),d2.end());//assign方法赋值，
    printDeque(d3);

    d3.assign(5,9);
    printDeque(d3);
}
int main()
{
    test01();
    return 0;
}