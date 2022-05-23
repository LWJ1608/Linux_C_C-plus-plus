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

    //下面语句可以理解为把b的地址取出，换成a的地址
    int &b = a; 
    // int &b = 10;错误，定义时不能等于实参
    //  int &c;错误，引用定义时需要给它赋值

    std::cout << "a = " << a << std::endl;
    std::cout << "&b = " << &b << std::endl;
    //输出结果第一个输出a的值，第二个输出b的地址，也是a的地址，用16进制表示

    // b = 100;

    // std::cout << "a = " << a << std::endl;
    // std::cout << "b = " << b << std::endl;

    return 0;
}