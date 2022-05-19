/**
 * @Author: lwj
 * @Date: 2022-05-19 13:24:44
 * @LastEditTime: 2022-05-19 13:24:45
 * @LastEditors: lwj
 * @Description:adjacent_find查找算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用查找算法/adejacent.cpp
 **/
// **功能描述：**
// * 查找相邻重复元素
// **函数原型：**
// adjacent_find(iterator beg, iterator end);  `
// 查找相邻重复元素,返回相邻元素的第一个位置的迭代器
// beg 开始迭代器
// end 结束迭代器

#include <iostream>
#include <vector>
#include<algorithm>
void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 9; i++)
    {
        v1.push_back(i);
    }
    
    //查找相邻重复元素
    std::vector<int>::iterator it = std::adjacent_find(v1.begin(),v1.end());
    if (it == v.end())
    {
        cout << "找不到!" << endl;
    }
    else
    {
        cout << "找到相邻重复元素为:" << *it << endl;
    }
}

int main()
{
    test01();
    return 0;
}