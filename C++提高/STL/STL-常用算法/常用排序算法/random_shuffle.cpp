/**
 * @Author: lwj
 * @Date: 2022-05-21 19:43:31
 * @LastEditTime: 2022-05-21 19:43:32
 * @LastEditors: lwj
 * @Description:random_shuffle随机排序算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用排序算法/random_shuffe.cpp
 **/

// **功能描述：**
// * 洗牌   指定范围内的元素随机调整次序
// **函数原型：**
// - `random_shuffle(iterator beg, iterator end);  `
// 指定范围内的元素随机调整次序
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
    //遍历未随机排序前的容器
    std::for_each(v1.begin(), v1.end(), PrintVector());
    std::cout << std::endl;
    //随机排序容器中元素
    std::random_shuffle(v1.begin(),v1.end());
    //遍历随机排序的容器
    std::for_each(v1.begin(), v1.end(), PrintVector());
    std::cout << std::endl;
}
int main()
{
    test01();
    return 0;
}