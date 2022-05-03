/**
 * @Author: lwj
 * @Date: 2022-05-03 21:44:46
 * @LastEditTime: 2022-05-03 21:44:47
 * @LastEditors: lwj
 * @Description:string容器的构造函数
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/String/test01.cpp
 **/
// string是C++ 风格的字符串，而string本质上是一个类

// 构造函数原型：
// string();
////创建一个空的字符串 例如: string str;
// string(const char *s);
//使用字符串s初始化
// string(const string &str);
//使用一个string对象初始化另一个string对象
// string(int n, char c);
//使用n个字符c初始化

#include <iostream>
#include <string>

using namespace std;

void test01()
{
    string s1; //默认构造
    char *str = "asfasf";
    string s1(str);
    cout << ""
}

int main()
{

    return 0;
}