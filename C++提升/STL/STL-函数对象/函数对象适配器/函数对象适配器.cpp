/**
 * @Author: lwj
 * @Date: 2022-08-31 09:22:04
 * @FilePath: /Linux_C_C-plus-plus/C++提升/STL/STL-函数对象/函数对象适配器/函数对象适配器.cpp
 * @Description:函数对象适配器的使用
 **/
#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

struct PrintVector
{
    void operator()(int v)
    {
        std::cout << v << " ";
    }
    std::cout << std::endl;
};

void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 8; i++)
    {
        v1.push_back(i);
    }
    std::for_each(v1.begin(), v1.end(), PrintVector());
}

int main()
{
    test01();
    return 0;
}