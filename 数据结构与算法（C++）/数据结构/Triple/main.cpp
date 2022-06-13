/**
 * @Author: lwj
 * @Date: 2022-06-04 20:11:32
 * @Description:稀疏矩阵的测试
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Triple/main.cpp
 **/
#include <iostream>
#include "triple.h"

using namespace std;
void test01()
{
    Triple<int> T1(3, 3, 2);
    T1.pushValue(0, 2, 3);
    T1.pushValue(0, 1, 3);
    T1.pushValue(0, 0, 3);
    T1.print();
}
int main()
{
    test01();
    return 0;
}