/**
 * @Author: lwj
 * @Date: 2022-05-15 15:49:30
 * @LastEditTime: 2022-05-15 15:49:30
 * @LastEditors: lwj
 * @Description:一元谓词
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-函数对象/谓词/test01.cpp
 **/
//返回bool类型的仿函数称为**谓词**
//如果operator()接受一个参数，那么叫做一元谓词

#include <iostream>
#include <vector>
#include <algorithm>
struct CompareNum
{
    bool operator()(int val) //二元谓词
    {
        return val > 9;
    }
};

void test01()
{
    std::vector<int> v1;
    for (int i = 5; i < 10; i++)
    {
        v1.push_back(i);
    }
    // find_if（）查找是否存在相同的数
    // CompareNum()匿名对象，也可以用普通对象
    std::vector<int>::iterator it = find_if(v1.begin(), v1.end(), CompareNum());
    if (it == v1.end())
    {
        std::cout << "vector容器中存在大于9的数" << std::endl;
    }
    else
    {
        std::cout << "vector容器中不存在大于9的数" << std::endl;
    }
}
int main()
{
    test01();
    return 0;
}