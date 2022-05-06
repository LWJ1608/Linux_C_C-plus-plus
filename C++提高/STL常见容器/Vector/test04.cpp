/**
 * @Author: lwj
 * @Date: 2022-05-06 19:54:12
 * @LastEditTime: 2022-05-06 19:54:12
 * @LastEditors: lwj
 * @Description:vector容器的构造函数
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Vector/test04.cpp
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
    // * `vector<T> v; `               		             //采用模板实现类实现，默认构造函数
    std::vector<int> v1;
    for (int i = 0; i < 5; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    // * `vector<T> v2(v.begin(), v.end());   `          //将v[begin(), end())区间中的元素拷贝给本身。
    std::vector<int> v2(v1.begin(), v1.end());
    printVector(v1);

    // * `vector(n, elem);`                              //构造函数将n个elem拷贝给本身。
    std::vector<int> v3(4, 5);
    printVector(v3);

    // * `vector(const vector &vec);`                    //拷贝构造函数。
    std::vector<int> v4(v1);
    printVector(v4);
}
int main()
{
    test01();
    return 0;
}