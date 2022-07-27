/**
 * @Author: lwj
 * @Date: 2022-05-15 16:32:27
 * @LastEditTime: 2022-05-15 16:32:27
 * @LastEditors: lwj
 * @Description:二元谓词
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-函数对象/谓词/test02.cpp
 **/

//返回bool类型的仿函数称为**谓词**
//如果operator()接受两个参数，那么叫做二元谓词

#include <iostream>
#include <vector>
#include <algorithm>
//二元谓词
class MyCompare
{
public:
    bool operator()(int num1, int num2)
    {
        return num1 > num2;
    }
};

void test01()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);

    //默认从小到大
    sort(v.begin(), v.end());
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "----------------------------" << std::endl;

    //使用函数对象改变算法策略，排序从大到小
    sort(v.begin(), v.end(), MyCompare());
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main()
{
    test01();
    return 0;
}
