/**
 * @Author: lwj
 * @Date: 2022-05-08 20:37:54
 * @LastEditTime: 2022-05-08 20:37:55
 * @LastEditors: lwj
 * @Description:vector容器的数据存取
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Vector/test08.cpp
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
    std::vector<int> v1;
    for (int i = 0; i < 5; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);
    // * `at(int idx); `        //返回索引idx所指的数据
    std::cout << "v1.at(1) = " << v1.at(1) << std::endl;

    // * `operator[]; `         //返回索引idx所指的数据
    std::cout << "v1[2] = " << v1[1] << std::endl;

    // * `front(); `            //返回容器中第一个数据元素
    std::cout << "v1.front() = " << v1.front() << std::endl;

    // * `back();`              //返回容器中最后一个数据元素
    std::cout<<"v1.back() = "<<v1.back()<<std::endl;
}
int main()
{
    test01();
    return 0;
}