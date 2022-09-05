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
    T1.pushValue(0, 1, 2);
    T1.pushValue(0, 0, 1);
    T1.print();
    //取位置为（2，0）,(0,2)的元素
    int value01 = T1.getValue(2, 0);
    int value02 = T1.getValue(0, 2);
    cout << "value01 = " << value01 << "\t"
         << "value02 = " << value02 << endl;
    //逆置
    Triple<int> T2(3, 3, 2);
    T2.transpose(T1);
    T2.print();
}
int main()
{
    test01();
    return 0;
}