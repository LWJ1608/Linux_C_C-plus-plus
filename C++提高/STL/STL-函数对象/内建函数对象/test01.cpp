/**
 * @Author: lwj
 * @Date: 2022-05-16 22:06:37
 * @LastEditTime: 2022-05-16 22:06:38
 * @LastEditors: lwj
 * @Description:算术仿函数
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-函数对象/内建函数对象/test01.cpp
 **/

//仿函数原型
// * `template<class T> T plus<T>`                //加法仿函数
// * `template<class T> T minus<T>`               //减法仿函数
// * `template<class T> T multiplies<T>`          //乘法仿函数
// * `template<class T> T divides<T>`             //除法仿函数
// * `template<class T> T modulus<T>`             //取模仿函数
// * `template<class T> T negate<T>`              //取反仿函数
#include <iostream>
#include <functional> //内联函数对象头文件

void test01()
{
    std::cout << "-----加法仿函数-----" << std::endl;
    std::plus<int> p1;//如果类型是string类型，则会合并两个字符串
    std::cout << "p1(10, 19) = " << p1(10, 19) << std::endl;

    std::cout << "\n-----减法仿函数-----" << std::endl;
    std::minus<int> m1;//无法对非数字进行运算
    std::cout << "m1(10, 9) = " << m1(10, 9) << std::endl;

    std::cout << "\n-----乘法仿函数-----" << std::endl;
    std::multiplies<int> m2;
    std::cout << "m2(10, 9) = " << m2(10, 9) << std::endl;

    std::cout << "\n-----取模仿函数-----" << std::endl;
    std::modulus<int> m3;
    std::cout << "m3(10, 9) = " << m3(10, 9) << std::endl;

    std::cout << "\n-----取反仿函数-----" << std::endl;
    std::negate<int> n1;
    std::cout << "n1(10) = " << n1(10) << std::endl;
}
int main()
{
    test01();
    return 0;
}