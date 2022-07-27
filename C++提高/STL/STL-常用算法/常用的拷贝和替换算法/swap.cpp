/**
 * @Author: lwj
 * @Date: 2022-05-21 22:30:02
 * @LastEditTime: 2022-05-21 22:30:02
 * @LastEditors: lwj
 * @Description:swap算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用的拷贝和替换算法/swap.cpp
 **/
// **功能描述：**
// * 互换两个容器的元素
// **函数原型：**
// - `swap(container c1, container c2);  `
// 互换两个容器的元素
// c1容器1
// c2容器2
#include <iostream>
#include <vector>
#include <algorithm>
//谓词，定义输出格式
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
    for (int i = 0; i < 8; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 8);
    }
    std::cout << "交换前：" << std::endl;
    std::for_each(v1.begin(), v1.end(), myPrint());
    std::cout << std::endl;
    std::for_each(v2.begin(), v2.end(), myPrint());
    std::cout << std::endl;

    std::cout << "交换后：" << std::endl;
    std::swap(v1, v2);
    std::for_each(v1.begin(), v1.end(), myPrint());
    std::cout << std::endl;
    std::for_each(v2.begin(), v2.end(), myPrint());
    std::cout << std::endl;
}
int main()
{
    test01();
    return 0;
}