/**
 * @Author: lwj
 * @Date: 2022-05-13 15:27:34
 * @LastEditTime: 2022-05-13 15:27:34
 * @LastEditors: lwj
 * @Description:set容器的排序
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Set_Multiset/test07.cpp
 **/
#include <iostream>
#include <string>
#include <set>

class Person //需要排序的自定义类型
{
public:
    Person(std::string name, int age, int heigh)
    {
        this->_name = name;
        this->_age = age;
        this->_heigh = heigh;
    }

public:
    std::string _name;
    int _age;
    int _heigh;
};

class ModSort //创建仿函数类型
{
public:
    bool operator()(const int v1, const int v2) //仿函数，对（）进行重载
    {
        return v1 > v2;
    }
};
class comparePerson
{
public:
    bool operator()(const Person &p1, const Person &p2)
    {
        if (p1._age == p2._age)
        {
            return p1._heigh < p2._heigh;
        }
        else
        {
            return p1._age < p2._age;
        }
    }
};
//系统数据类型排序
void test01()
{
    std::set<int, ModSort> L1; //
    L1.insert(10);
    L1.insert(60);
    L1.insert(30);
    L1.insert(50);
    L1.insert(20);
    for (std::set<int, ModSort>::iterator it = L1.begin(); it != L1.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

//自定义数据类型排序
void test02()
{
    std::set<Person, comparePerson> s;

    Person p1("刘备", 23, 184);
    Person p2("关羽", 23, 159);
    Person p3("张飞", 25, 190);
    Person p4("赵云", 21, 180);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);
    for (std::set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
    {
        std::cout << "姓名： " << it->_name << "\t年龄：\t" << it->_age << "\t身高：\t" << it->_heigh << std::endl;
    }
}
int main()
{
    test01();
    test02();
    return 0;
}