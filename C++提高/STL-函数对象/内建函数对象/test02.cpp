/**
 * @Author: lwj
 * @Date: 2022-05-16 22:30:42
 * @LastEditTime: 2022-05-16 22:30:42
 * @LastEditors: lwj
 * @Description:关系仿函数
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-函数对象/内建函数对象/test02.cpp
 **/
//函数对象原型：
// * `template<class T> bool equal_to<T>`                    //等于
// * `template<class T> bool not_equal_to<T>`            //不等于
// * `template<class T> bool greater<T>`                      //大于
// * `template<class T> bool greater_equal<T>`          //大于等于
// * `template<class T> bool less<T>`                           //小于
// * `template<class T> bool less_equal<T>`               //小于等于

#include <iostream>
#include <functional> //内联函数对象头文件
#include <vector>

void printVector(const std::vector<int> &v)
{
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
    }
}
void test01()
{
}
int main()
{
    test01();
    return 0;
}