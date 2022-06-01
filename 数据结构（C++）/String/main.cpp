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
    if (b1 == b2)
    {
        cout << "相等\n";
    }
    else
    {
        cout << "不相等\n";
    }

    //重载<<，用于输入串
    cout << "b1 = " << b1 << endl;
    cout << "b2 = " << b2 << endl;

    //重载>>，用于输出串
    String b3;
    cout << "请输入一个字符串> ";
    cin >> b3;
    cout << "输入的字符串为：" << b3 << endl;

    //重载[],重载=
    String s4("aaa");
    String s5("bbb");
    String s6;
    s6 = s4 + s5;
    cout << "s4 + s5 = " << s6 << endl;

    //重载[]，通过下标运算取出字符
    cout << "s4 = " << s4 << endl;
    cout << "s4[0] = " << s4[0] << endl;
    cout << "s4[5] = " << s4[5] << endl;
}
int main()
{
    // test01();
    test02();
    return 0;
}