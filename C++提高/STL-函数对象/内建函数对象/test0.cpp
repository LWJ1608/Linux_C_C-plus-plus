/**
 * @Author: lwj
 * @Date: 2022-05-17 21:29:35
 * @LastEditTime: 2022-05-17 21:29:35
 * @LastEditors: lwj
 * @Description:逻辑仿函数
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-函数对象/内建函数对象/test0.cpp
 **/

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

void test01()
{
    std::vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for (std::vector<bool>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void main()
{
    test01();
    return 0;
}