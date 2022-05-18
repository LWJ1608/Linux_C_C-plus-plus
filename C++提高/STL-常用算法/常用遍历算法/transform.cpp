/**
 * @Author: lwj
 * @Date: 2022-05-18 21:09:28
 * @LastEditTime: 2022-05-18 21:09:29
 * @LastEditors: lwj
 * @Description:transform算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用遍历算法/transform.cpp
 **/

// transform(iterator beg1, iterator end1, iterator beg2, _func);
// beg1 源容器开始迭代器
// end1 源容器结束迭代器
// beg2 目标容器开始迭代器
//_func 函数或者函数对象
#include <iostream>
#include <vector>
#include <algorithm>

//仿函数
class Transform
{
public:
    int operator()(int val)
    {
        return val * val;
    }
};

//仿函数
class Myprint
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
    for (int i = 0; i < 5; i++)
    {
        v1.push_back(i);
    }
    std::for_each(v1.begin(), v1.end(), Myprint()); //遍历容器
    std::cout << std::endl;

    std::vector<int> v2; //目标容器
    v2.resize(v1.size());

    //将v1容器的值复制到v2中,仿函数Transform可以在搬运过程中对数值进行运算
    std::transform(v1.begin(), v1.end(), v2.begin(), Transform()); // trastform容器搬运

    std::for_each(v2.begin(), v2.end(), Myprint()); //遍历容器
    std::cout << std::endl;
}
int main()
{
    test01();
    return 0;
}