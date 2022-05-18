/**
 * @Author: lwj
 * @Date: 2022-05-18 20:43:00
 * @LastEditTime: 2022-05-18 20:43:01
 * @LastEditors: lwj
 * @Description:for_each算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/for_each.cpp
 **/

// for_each(iterator beg, iterator end, _func);
//  遍历算法 遍历容器元素
//  beg 开始迭代器
//  end 结束迭代器
//  _func 函数或者函数对象

#include <iostream>
#include <vector>
#include <algorithm>

//普通函数
void printV(int val)
{
    std::cout << val << " ";
}
void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 5; i++)
    {
        v1.push_back(i);
    }
    std::for_each(v1.begin(), v1.end(), printV); //传入普通函数名
    std::cout << std::endl;
}
int main()
{
    test01();
    return 0;
}