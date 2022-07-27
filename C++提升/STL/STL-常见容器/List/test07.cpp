/**
 * @Author: lwj
 * @Date: 2022-05-12 15:02:38
 * @LastEditTime: 2022-05-12 15:02:39
 * @LastEditors: lwj
 * @Description:list容器自定义类型排序
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/List/test07.cpp
 **/
#include <iostream>
#include <list>
#include <string>
class Person
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
bool comparePer(Person &P1, Person &P2) //定义排序规则
{
    if (P1._age == P2._age)
    {
        return P1._heigh > P2._heigh;
    }
    else
    {
        return P1._age < P2._age;
    }
}
void test01()
{
    std::list<Person> L;

    Person p1("刘备", 35, 175);
    Person p2("曹操", 45, 180);
    Person p3("孙权", 40, 170);
    Person p4("赵云", 25, 190);
    Person p5("张飞", 35, 160);
    Person p6("关羽", 35, 200);

    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);

    for (std::list<Person>::iterator it = L.begin(); it != L.end(); it++)
    {
        std::cout << "姓名： " << it->_name << " 年龄： " << it->_age
                  << " 身高： " << it->_heigh << std::endl;
    }
    std::cout << "----------------------------------------------" << std::endl;
    L.sort(comparePer); //把函数地址传入sort进行排序
    for (std::list<Person>::iterator it = L.begin(); it != L.end(); it++)
    {
        std::cout << "姓名： " << it->_name << " 年龄： " << it->_age
                  << " 身高： " << it->_heigh << std::endl;
    }
}
int main()
{
    test01();
    return 0;
}