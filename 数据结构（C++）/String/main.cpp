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
    String s1;
    cout << "maxSize = " << s1.capacity() << endl;
    //测试有参构造
    String s2("lwj");
    cout << "maxSize = " << s2.capacity() << endl;
}

int main()
{
    test01();
    return 0;
}