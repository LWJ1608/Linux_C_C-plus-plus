/**
 * @Author: lwj
 * @Date: 2022-05-09 08:57:47
 * @LastEditTime: 2022-05-09 08:57:48
 * @LastEditors: lwj
 * @Description:vector容器预留空间
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Vector/test10.cpp
 **/
// 预留空间可以减少vector在动态扩展容量时的扩展次数

#include <iostream>
#include <vector>

void test01()
{
    std::vector<int> v1;
    int num = 0;        //空间扩展次数统计
    int *p = nullptr;   //指向容器首元素
    v1.reserve(100000); //预留空间，不初始化，无法访问
    for (int i = 0; i < 100000; i++)
    {
        v1.push_back(i);
        if (p != &v1[0])
        {
            p = &v1[0];
            num++;
        }
    }
    std::cout << "空间扩展的次数为：" << num << std::endl;
}
int main()
{
    test01();
    return 0;
}