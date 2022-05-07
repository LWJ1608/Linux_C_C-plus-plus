/**
 * @Author: lwj
 * @Date: 2022-05-07 16:02:48
 * @LastEditTime: 2022-05-07 16:02:48
 * @LastEditors: lwj
 * @Description:vector赋值操作
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Vector/test05.cpp
 **/

#include <iostream>
#include <vector>
void printVector(std::vector<int> &v)
{
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
void test01()
{
    std::vector<int> v1(3, 8);
    std::vector<int> v2;
    // push_back赋值
    v2.push_back(88);
    printVector(v2);
    // * `vector& operator=(const vector &vec);`//重载等号操作符
    v2 = v1;
    printVector(v2);

    // * `assign(beg, end);`       //将[beg, end)区间中的数据拷贝赋值给本身。
    v2.assign(v1.begin(), v1.end());
    printVector(v2);

    // * `assign(n, elem);`        //将n个elem拷贝赋值给本身。
    v2.assign(4, 9);
    printVector(v2);
}
int main()
{
    test01();
    return 0;
}