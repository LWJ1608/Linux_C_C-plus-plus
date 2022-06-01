/**
 * @Author: lwj
 * @Date: 2022-06-01 15:54:31
 * @Description:测试串的功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/String/main.cpp
 **/
#include "String.h"

#include <iostream>
using namespace std;

//测试构造函数功能
void test01()
{
    //测试无参构造
    String a1;
    cout << "s1:maxSize = " << a1.capacity() << endl;
    //测试有参构造
    String a2("lwj");
    cout << "s2:maxSize = " << a2.capacity() << endl;
}
//测试重载函数
void test02()
{
    //重载==，用判断两个串是否相等
    String b1("abc");
    String b2("abcd");
    cout << b1 == b2 ? true : false;
    //重载+，用于合并俩个串
    //重载=，把一个串的赋值
    //重载[]，通过下标运算取出字符
    //重载<<，用于输入串
    //重载>>，用于输出串
}
int main()
{
    test01();
    test02();
    return 0;
}