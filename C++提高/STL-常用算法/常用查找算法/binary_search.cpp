/**
 * @Author: lwj
 * @Date: 2022-05-19 13:39:11
 * @LastEditTime: 2022-05-19 13:39:11
 * @LastEditors: lwj
 * @Description:binary_search（二分查找法）的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用查找算法/binary_search.cpp
 **/
// **功能描述：**
// * 查找指定元素是否存在
// **函数原型：**
// - `bool binary_search(iterator beg, iterator end, value);
// 查找指定的元素，查到 返回true  否则false
// 注意: 在**无序序列中不可用**
// beg 开始迭代器
// end 结束迭代器
// value 查找的元素
#include <iostream>
#include <vector>
#include <algorithm>
void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 9; i++)
    {
        v1.push_back(i);
    }

    //查找相邻重复元素
    bool it = std::binary_search(v1.begin(), v1.end(),2);
    if (it == false)
    {
        std::cout << "找不到元素!" << std::endl;
    }
    else
    {
        std::cout << "找到了元素" << std::endl;
    }
}

int main()
{
    test01();
    return 0;
}