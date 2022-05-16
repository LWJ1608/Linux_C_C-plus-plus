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

void printVector(std::vector<int> &v)
{
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
class CompareV
{
public:
    bool operator()(const int v1, const int v2)
    {
        return v1 < v2;
    }
};

void test01()
{
    std::vector<int> v1;

    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(40);
    v.push_back(20);
}
int main()
{
    test01();
    return 0;
}