/**
 * @Author: lwj
 * @Date: 2022-05-15 14:44:07
 * @LastEditTime: 2022-05-15 14:44:08
 * @LastEditors: lwj
 * @Description:函数对象(仿函数)的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-函数对象/函数对象/test01.cpp
 **/
//函数对象可以像函数一使用，是因为它是对（）进行了重载

//函数对象的特点：
// 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
// 函数对象超出普通函数的概念，函数对象可以有自己的状态
// 函数对象可以作为参数传递
#include <iostream>
#include <string>

// 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
class AddNumber
{
public:
    int operator()(const int n1, const int n2)
    {
        return n1 + n2;
    }
};
void test01()
{
    AddNumber a1;
    int count = a1(2, 8);
    std::cout << "两数相加和等于：" << count << std::endl;
}

// 函数对象超出普通函数的概念，函数对象可以有自己的状态
class PrintString
{
public:
    PrintString()
    {
        this->count = 0;
    }
    void operator()(std::string s1)
    {
        for (int i = 0; i < 5; i++)
        {
            std::cout << s1 << " ";
            this->count++;
        }
        std::cout << std::endl;
    }
    int count; //记录函数使用次数
};
void test02()
{
    PrintString p1;
    p1("hello");
    std::cout << "printString成员函数循环的次数为：" << p1.count << std::endl;
}

// 函数对象可以作为参数传递
void testPrintString(PrintString &p, std::string s1)
{
    p(s1);
}
void test03()
{
    PrintString p2;
    testPrintString(p2,"hello");
}
int main()
{
    test03();
    // test02();
    // test01();
    return 0;
}
