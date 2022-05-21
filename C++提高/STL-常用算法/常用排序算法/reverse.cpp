/**
 * @Author: lwj
 * @Date: 2022-05-21 21:00:38
 * @LastEditTime: 2022-05-21 21:00:39
 * @LastEditors: lwj
 * @Description:reverse反转算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用排序算法/reverse.cpp
 **/
#include <iostream>
#include <vector>
#include <algorithm>

class PrintVector
{
public:
    void operator()(int val)
    {
        std::cout << val << " ";
    }
};
void test01()
{
    std::vector<int> v1;
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(33);
    v1.push_back(22);
    v1.push_back(7);
    v1.push_back(3);
}
int main()
{

    return 0;
}