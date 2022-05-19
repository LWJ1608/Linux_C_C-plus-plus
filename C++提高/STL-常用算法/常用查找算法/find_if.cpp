/**
 * @Author: lwj
 * @Date: 2022-05-19 11:33:44
 * @LastEditTime: 2022-05-19 11:33:45
 * @LastEditors: lwj
 * @Description:find_if查找算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用查找算法/find_if.cpp
 **/
//功能描述：
// * 按条件查找元素
//函数原型：
// find_if(iterator beg, iterator end, _Pred);
// 按条件查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// _Pred 函数或者谓词（返回bool类型的仿函数）
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//打印
void printV(std::vector<int> &v)
{
    for (int i = 0; i < 9; i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}
//内置类型的判断条件谓词
class Find_if
{
public:
    bool operator()(int val)
    {
        return val > 2;
    }
};

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
//自定义类型判断条件谓词
class Find_if_Person
{
public:
    bool operator()(Person &p)
    {
        return p._age == 18;
    }
};
//内置数据类型查找
void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 9; i++)
    {
        v1.push_back(i);
    }
    printV(v1);
    // find_if 找到符合条件返回它的迭代器
    std::vector<int>::iterator it = std::find_if(v1.begin(), v1.end(), Find_if());
    if (it != v1.end())
    {
        std::cout << "找到符合条件的值" << std::endl;
    }
    else
    {
        std::cout << "没找到符合条件的值" << std::endl;
    }
}
void test02()
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

    // find_if 找到符合条件返回它的迭代器
    std::vector<Person>::iterator it = std::find_if(v1.begin(), v1.end(), Find_if_Person());
    if (it != v1.end())
    {
        std::cout << "找到符合条件的值" << std::endl;
    }
    else
    {
        std::cout << "没找到符合条件的值" << std::endl;
    }
int main()
{
    test01();
    test02();
    return 0;
}