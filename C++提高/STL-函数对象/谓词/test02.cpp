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
struct CompareNum
{
    bool operator()(int val1, int val2) //二元谓词
    {
        return val1 > val2;
    }
};

void test01()
{
    std::vector<int> v1;
    for (int i = 5; i < 10; i++)
    {
        v1.push_back(i);
    }
}
int main()
{
    test01();
    return 0;
}
