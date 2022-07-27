/**
 * @Author: lwj
 * @Date: 2022-05-09 10:56:55
 * @LastEditTime: 2022-05-09 10:56:56
 * @LastEditors: lwj
 * @Description:deque 数据存取
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Deque/test05.cpp
 **/
#include <iostream>
#include <deque>

void printDeque(std::deque<int> &d)
{
    for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
// 两端插入删除操作：
void test01()
{
    std::deque<int> d1;
    for (int i = 1; i < 6; i++)
    {
        d1.push_back(i); //插入数据
    }
    printDeque(d1);
    // at(pot)返回pot位置的元素
    int a = d1.at(1);
    std::cout << "d1.at(1) = " << a << std::endl;

    // `operator[]; `      //返回索引idx所指的数据
    int b = d1[1];
    std::cout << "d1[1] = " << b << std::endl;
    // - `front(); `            //返回容器中第一个数据元素
    int c = d1.front();
    // - `back();`              //返回容器中最后一个数据元素
    int d = d1.back();
}
int main()
{
    test01();
    return 0;
}