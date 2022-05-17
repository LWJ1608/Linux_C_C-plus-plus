/**
 * @Author: lwj
 * @Date: 2022-05-17 21:29:35
 * @LastEditTime: 2022-05-17 21:29:35
 * @LastEditors: lwj
 * @Description:逻辑仿函数
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-函数对象/内建函数对象/test0.cpp
 **/
// * `template<class T> bool logical_and<T>`              //逻辑与
// * `template<class T> bool logical_or<T>`                //逻辑或
// * `template<class T> bool logical_not<T>`              //逻辑非

#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>
using namespace std;
void printVerctor(std::vector<bool> &v)
{
    for (std::vector<bool>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void test01()
{
    std::vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    printVerctor(v);

    //逻辑非  将v容器搬运到v2中，并执行逻辑非运算
    std::vector<bool> v2;
    v2.reserve(v.size());
    //使用到transform算法，将v容器搬运到v2中，搬运目的容器必须先开辟空间
    transform(v.begin(), v.end(), v2.begin(), std::logical_not<bool>());

    printVerctor(v2);
}
int main()
{
    test01();
    return 0;
}
