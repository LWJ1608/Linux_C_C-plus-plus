/**
 * @Author: lwj
 * @Date: 2022-05-21 23:24:18
 * @LastEditTime: 2022-05-21 23:24:18
 * @LastEditors: lwj
 * @Description:set_diffrence算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用集合算法/set_diffrent.cpp
 **/
// **功能描述：**
// * 求两个集合的差集
// **函数原型：**
// - `set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `
// 求两个集合的差集
// **注意:两个集合必须是有序序列**
// beg1 容器1开始迭代器
// end1 容器1结束迭代器
// beg2 容器2开始迭代器
// end2 容器2结束迭代器
// dest 目标容器开始迭代器

#include <iostream>
#include <vector>
#include <algorithm>
#include <
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
    std::vector<int> v1;
    std::vector<int> v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }

    std::vector<int> vTarget;
    //取两个里面较大的值给目标容器开辟空间
    vTarget.resize(std::max(v1.size(), v2.size()));

    //返回目标容器的最后一个元素的迭代器地址
    std::cout << "v1与v2的差集为： " << std::endl;
    std::vector<int>::iterator itEnd =
        set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    std::for_each(vTarget.begin(), itEnd, myPrint());
    std::cout << std::endl;

    std::cout << "v2与v1的差集为： " << std::endl;
    itEnd = std::set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
    std::for_each(vTarget.begin(), itEnd, myPrint());
    std::cout << std::endl;
}

int main()
{

    test01();
    return 0;
}