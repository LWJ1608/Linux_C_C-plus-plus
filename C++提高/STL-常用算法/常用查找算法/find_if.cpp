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
//内置数据类型查找
void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 9; i++)
    {
        v1.push_back(i);
    }
    printV(v1);
}
void test02()
{
    std::vector<Person> v1;
    Person p1("小文", 33);
    Person p2("小五", 13);
    Person p3("小搜", 19);
    Person p4("小数", 12);
    Person p5("小串", 39);

    Person1.push_back(p1);
    Person1.push_back(p2);
    Person1.push_back(p3);
    Person1.push_back(p4);
    Person1.push_back(p5);
}
int main()
{
    test01();
    return 0;
}