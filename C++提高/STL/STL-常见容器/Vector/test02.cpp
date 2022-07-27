/**
 * @Author: lwj
 * @Date: 2022-05-03 19:44:13
 * @LastEditTime: 2022-05-03 19:44:20
 * @LastEditors: lwj
 * @Description:vector容器存放自定义类型
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/Vector/test02.cpp
 **/
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->_name = name;
        this->_age = age;
    }
    string _name;
    int _age;
};
//用vector容器存放自定义类
void test01()
{
    Person p1("a", 1);
    Person p2("b", 2);
    Person p3("c", 3);
    Person p4("d", 4);

    vector<Person> v1;
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);
    //打印
    for (vector<Person>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << "姓名：" << it->_name << "\t"
             << "年龄：" << it->_age << endl;
    }
}
void test02()
{
    Person p1("a", 1);
    Person p2("b", 2);
    Person p3("c", 3);
    Person p4("d", 4);

    vector<Person *> v1;
    v1.push_back(&p1);
    v1.push_back(&p2);
    v1.push_back(&p3);
    v1.push_back(&p4);
    //打印
    for (vector<Person *>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << "姓名：" << (*it)->_name << "\t"
             << "年龄：" << (*it)->_age << endl;
    }
}
int main()
{
    test01(); // vector容器存放类
    test02(); //存放类指针
    return 0;
}