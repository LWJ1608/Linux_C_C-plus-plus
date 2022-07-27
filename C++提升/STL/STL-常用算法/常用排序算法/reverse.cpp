/**
 * @Author: lwj
 * @Date: 2022-05-21 21:00:38
 * @LastEditTime: 2022-05-21 21:00:39
 * @LastEditors: lwj
 * @Description:reverse反转算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用排序算法/reverse.cpp
 **/
// **功能描述：**
// * 将容器内元素进行反转
// **函数原型：**
// - `reverse(iterator beg, iterator end);  `
// 反转指定范围的元素
// beg 开始迭代器
// end 结束迭代器

#include <iostream>
#include <vector>
#include <algorithm>

class PrintVector
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
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(33);
    v1.push_back(22);
    v1.push_back(7);
    v1.push_back(3);
    //遍历
    std::for_each(v1.begin(), v1.end(), PrintVector());
    std::cout << std::endl;
    //reverse反转
    std::reverse(v1.begin(),v1.end());
    //反转后
    std::for_each(v1.begin(), v1.end(), PrintVector());
    std::cout << std::endl;
}
int main()
{
    test01();
    return 0;
}