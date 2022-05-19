/**
 * @Author: lwj
 * @Date: 2022-05-19 19:49:50
 * @LastEditTime: 2022-05-19 19:49:50
 * @LastEditors: lwj
 * @Description:count算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用查找算法/count.cpp
 **/
// **功能描述：**
// * 统计元素个数
// **函数原型：**
// - `count(iterator beg, iterator end, value);  `
// 统计元素出现次数
// beg 开始迭代器
// end 结束迭代器
// value 统计的元素
#include <iostream>
#include <vector>
#include <algorithm>

void printV(std::vector<int> &v)
{
    for (int i = 0; i < 8; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}
void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 8; i++)
    {
        v1.push_back(i);
    }
    printV(v1);
    //统计元素个数
    int count = std::count(v1.begin(), v1.end(), 4);
}
int main()
{
    test01();
    return 0;
}