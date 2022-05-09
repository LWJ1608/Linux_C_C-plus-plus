/**
 * @Author: lwj
 * @Date: 2022-05-09 11:12:28
 * @LastEditTime: 2022-05-09 11:12:29
 * @LastEditors: lwj
 * @Description:利用算法实现对deque容器进行排序
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Deque/test06.cpp
 **/
#include <iostream>
#include <deque>
#include<algorithm>
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
    for (int i = 8; i >0; i--)
    {
        d1.push_back(i);
    }
    printDeque(d1);

    //`sort(iterator beg, iterator end)`  //对beg和end区间内元素进行排序
    sort(d1.begin(), d1.end());
    printDeque(d1);
}
int main()
{
    test01();
    return 0;
}