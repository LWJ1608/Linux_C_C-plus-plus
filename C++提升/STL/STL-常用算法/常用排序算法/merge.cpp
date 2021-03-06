/**
 * @Author: lwj
 * @Date: 2022-05-21 20:17:06
 * @LastEditTime: 2022-05-21 20:17:07
 * @LastEditors: lwj
 * @Description:merge算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用排序算法/merge.cpp
 **/
// **功能描述：**
// * 两个容器元素合并，并存储到另一容器中
// **函数原型：**
// - `merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `
// 容器元素合并，并存储到另一容器中
// 注意: 两个容器必须是**有序的**
// beg1   容器1开始迭代器
// end1   容器1结束迭代器
// beg2   容器2开始迭代器
// end2   容器2结束迭代器
// dest    目标容器开始迭代器
#include <iostream>
#include <vector>
#include <algorithm>

void printVector(int val)
{
    std::cout << val << " ";
}
void test01()
{
    std::vector<int> v1;
    std::vector<int> v2;
    for (int i = 0; i < 9; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 8);
    }

    //使用merge算法合并两个容器的时候需要先进行扩容
    std::vector<int> dest;
    dest.resize(v1.size() + v2.size());
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), dest.begin());
    //遍历dest容器
    std::for_each(dest.begin(), dest.end(), printVector);
    std::cout << std::endl;
}
int main()
{
    test01();
    return 0;
}