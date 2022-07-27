/**
 * @Author: lwj
 * @Date: 2022-05-21 22:56:46
 * @LastEditTime: 2022-05-21 22:56:47
 * @LastEditors: lwj
 * @Description:fill算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用算数生成算法/fill.cpp
 **/
#include<iostream>
#include <numeric>
#include <vector>
#include <algorithm>

class myPrint
{
public:
    void operator()(int val)
    {
        std::cout << val << " ";
    }
};

void test01()
{

    std::vector<int> v;
    v.resize(10);
    //填充
    std::fill(v.begin(), v.end(), 100);

    std::for_each(v.begin(), v.end(), myPrint());
    std::cout << std::endl;
}

int main()
{

    test01();
    return 0;
}