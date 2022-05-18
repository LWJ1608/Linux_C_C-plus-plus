/**
 * @Author: lwj
 * @Date: 2022-05-18 21:29:16
 * @LastEditTime: 2022-05-18 21:29:16
 * @LastEditors: lwj
 * @Description:find算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用查找算法/find.cpp
 **/

//功能描述：
// * 查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()

//函数原型：
// - `find(iterator beg, iterator end, value);  `
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
// beg 开始迭代器
// end 结束迭代器
// value 查找的元素

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
class Person
{
public:
    Person(std::string name, int age)
    {
        this->_name = name;
        this->_age = age;
    }
    //重载 == 让底层的find知道怎样对比Person数据类型
    bool operator==(const Person& p)
    {
        if(p._name==this->_name && p._age==this->_age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    std::string _name;
    int _age;
};
void test01()
{
    std::vector<Person> Person1;
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
    
    std::vector<Person>::iterator it=std::find(Person1.begin(),Person1.end(),p2);
}
int main()
{
    test01();
    return 0;
}