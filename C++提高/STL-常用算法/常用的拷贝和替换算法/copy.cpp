/**
 * @Author: lwj
 * @Date: 2022-05-21 21:48:44
 * @LastEditTime: 2022-05-21 21:48:44
 * @LastEditors: lwj
 * @Description:copy
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用的拷贝和替换算法/copy.cpp
 **/
// **功能描述：**
// * 容器内指定范围的元素拷贝到另一容器中
// **函数原型：**
// - `copy(iterator beg, iterator end, iterator dest);  `
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
#include <iostream>
#include <vector>
#include <algorithm>
//仿函数
class PrintV2
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
    std::for_each(v1.begin(), v1.end(), PrintV2()); //遍历容器
    std::cout << std::endl;

    std::vector<int> v2; //目标容器
    v2.resize(v1.size());//复制前需要先进行空间分配

    //将v1容器的值复制到v2中,仿函数Transform可以在搬运过程中对数值进行运算
    std::copy(v1.begin(), v1.end(), v2.begin());//将v1容器的元素复制到v2容器中

    std::for_each(v2.begin(), v2.end(), PrintV2()); //遍历容器
    std::cout << std::endl;
}
int main()
{
    test01();
    return 0;
}