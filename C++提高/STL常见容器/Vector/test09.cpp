/**
 * @Author: lwj
 * @Date: 2022-05-08 20:52:53
 * @LastEditTime: 2022-05-08 20:52:54
 * @LastEditors: lwj
 * @Description:vector互换容器
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Vector/test09.cpp
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
    std::vector<int> v2;
    for (int i = 0; i < 9; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 9);
    }
    printVector(v1);
    printVector(v2);
    std::cout << "v1容器的容量为：" << v1.capacity() << std::endl;
    std::cout << "v1容器的大小为：" << v1.size() << std::endl;
    std::cout << "v2容器的容量为：" << v2.capacity() << std::endl;
    std::cout << "v2容器的大小为：" << v2.size() << std::endl;

    // `swap(vec);`  // 将vec与本身的元素互换
    v1.swap(v2);
    printVector(v1);
    printVector(v2);
}
void test02()
{
    std::vector<int> v1;
    for (int i = 0; i < 10000; i++)
    {
        v1.push_back(i);
    }
    std::cout << "v1容器的容量为：" << v1.capacity() << std::endl;
    std::cout << "v1容器的大小为：" << v1.size() << std::endl;
    v1.resize(3);
    std::cout << "v1容器的容量为：" << v1.capacity() << std::endl;
    std::cout << "v1容器的大小为：" << v1.size() << std::endl;
    // 巧用swap可以缩小容器的容量
    std::vector<int>(v1).swap(v1);
    // vector<int>(v1)匿名对象、没有名，创建的时候分配的容量和大小等于v1的大小，当前语句运行完后系统会马上释放它的空间
    std::cout << "v1容器的容量为：" << v1.capacity() << std::endl;
    std::cout << "v1容器的大小为：" << v1.size() << std::endl;
}
int main()
{
    // test01();
    test02();
    return 0;
}