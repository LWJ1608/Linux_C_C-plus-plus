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
//谓词
class Count_if
{
public:
    bool operator()(Person &p)
    {
        return p._age > 3;
    }
};
void test01()
{
    std::vector<Person> v1;
    Person p1("小文", 33);
    Person p2("小五", 13);
    Person p3("小搜", 19);
    Person p4("小数", 12);
    Person p5("小串", 39);

    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);
    v1.push_back(p5);
    // count_if 统计符合条件的元素个数
    std::count_if(v1.begin(), v1.end(), Count_if());
}

int main()
{
    test01();
    return 0;
}