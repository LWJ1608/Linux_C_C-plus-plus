/**
 * @Author: lwj
 * @Date: 2022-07-27 12:32:33
 * @FilePath: /Linux_C_C-plus-plus/test01/test01.cpp
 * @Description:deque(双端数组)的使用
 **/

#include <iostream>
#include <deque>

void printDeque(std::deque<int> v)
{
    for (std::deque<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
// deque构造函数
void test01()
{
    //默认构造函数
    std::deque<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);

    //区间拷贝构造
    std::deque<int> v2(v1.begin(), v1.end());
    //拷贝n个数给自身
    std::deque<int> v3(1, 2);
    //拷贝构造函数
    std::deque<int> v4(v1);
    printDeque(v1);
}

int main()
{
    test01();
    return 0;
}