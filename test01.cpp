/**
 * @Author: lwj
 * @Date: 2022-05-23 13:08:35
 * @LastEditTime: 2022-05-23 13:08:35
 * @LastEditors: lwj
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/test01.cpp
 **/
#include <iostream>

int main()
{

    int a = 10;
    //引用的定义

    int &b = a; //可以理解为
    // int &b = 10;错误，定义时不能等于实参
    //  int &c;错误，引用定义时需要给它赋值

    std::cout << "a = " << a << std::endl;
    std::cout << "&b = " << &b << std::endl;

    // b = 100;

    // std::cout << "a = " << a << std::endl;
    // std::cout << "b = " << b << std::endl;

    return 0;
}