/**
 * @Author: lwj
 * @Date: 2022-05-19 20:31:25
 * @LastEditTime: 2022-05-19 20:31:26
 * @LastEditors: lwj
 * @Description:count_if算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用查找算法/count_if.cpp
 **/

// **功能描述：**
// * 按条件统计元素个数
// **函数原型：**
// - `count_if(iterator beg, iterator end, _Pred);  `
// 按条件统计元素出现次数
// beg 开始迭代器
// end 结束迭代器
// _Pred 谓词

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
//自定义类型
class Person
{
public:
    Person(std::string name, int age)
    {
        this->_name = name;
        this->_age = age;
    }

public:
    std::string _name;
    int _age;
};
class Count_if
{
public:
};
void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 5; i++)
    {
        v1.push_back(i);
    }
    // count_if 统计符合条件的元素个数
    std::count_if(v1.begin(), v1.end(), )
}

int main()
{
    test01();
    return 0;
}