/**
 * @Author: lwj
 * @Date: 2022-05-21 22:10:07
 * @LastEditTime: 2022-05-21 22:10:07
 * @LastEditors: lwj
 * @Description:replace_if算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用的拷贝和替换算法/replace_if.cpp
 **/
// **功能描述:**
// * 将区间内满足条件的元素，替换成指定元素
// **函数原型：**
// - `replace_if(iterator beg, iterator end, _pred, newvalue);  `
// 按条件替换元素，满足条件的替换成指定元素
// beg 开始迭代器
// end 结束迭代器
// _pred 谓词
// newvalue 替换的新元素
#include <iostream>
#include <algorithm>
#include <vector>
//谓词，定义输出格式
class myPrint
{
public:
    void operator()(int val)
    {
        std::cout << val << " ";
    }
};
//谓词，定义替换的条件
class Replace_if
{
public:
    bool operator()(int val)
    {
        return val > 20;
    }
};
void test01()
{
    std::vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(50);
    v.push_back(10);
    v.push_back(20);

    std::cout << "替换前：" << std::endl;
    for_each(v.begin(), v.end(), myPrint());
    std::cout << std::endl;
    std::cout << "替换后：" << std::endl;
    std::replace_if(v.begin(), v.end(), Replace_if(), 88);
    for_each(v.begin(), v.end(), myPrint());
    std::cout << std::endl;
}
int main()
{
    test01();
    return 0;
}