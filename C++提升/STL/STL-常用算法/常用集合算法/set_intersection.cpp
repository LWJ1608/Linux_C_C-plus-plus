/**
 * @Author: lwj
 * @Date: 2022-05-21 23:08:30
 * @LastEditTime: 2022-05-21 23:08:30
 * @LastEditors: lwj
 * @Description:set_intersection算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用集合算法/set_intersection.cpp
 **/
// **功能描述：**
// * 求两个容器的交集
// **函数原型：**
// - `set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `
// 求两个集合的交集
// **注意:两个集合必须是有序序列**
// beg1 容器1开始迭代器
// end1 容器1结束迭代器
// beg2 容器2开始迭代器
// end2 容器2结束迭代器
// dest 目标容器开始迭代器

#include <iostream>
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
int main()
{
    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> v3;
    for (int i = 0; i < 9; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    //为v3容器开辟空间
    v3.resize(v1.size() + v2.size());
    std::set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
    std::for_each(v3.begin(), v3.end(), myPrint());
    std::cout << std::endl;
    return 0;
}