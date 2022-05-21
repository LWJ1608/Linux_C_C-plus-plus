/**
 * @Author: lwj
 * @Date: 2022-05-21 22:49:56
 * @LastEditTime: 2022-05-21 22:49:56
 * @LastEditors: lwj
 * @Description:accumulate算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用算数生成算法/accumulate.cpp
 **/
// **功能描述：**
// *  计算区间内 容器元素累计总和
// **函数原型：**
// - `accumulate(iterator beg, iterator end, value);  `
// 计算容器元素累计总和
// beg 开始迭代器
// end 结束迭代器
// value 起始值
//需要包含numeric头文件
#include <iostream>
#include <vector>
#include <numeric>
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
    //计算容器中元素值得和
    int count = std::accumulate(v1.begin(), v1.end(), 0);
    std::cout << "计算容器中元素值得和为：" << count << std::endl;
}
int main()
{
    test01();
    return 0;
}