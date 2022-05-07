/**
 * @Author: lwj
 * @Date: 2022-05-07 16:23:54
 * @LastEditTime: 2022-05-07 16:23:55
 * @LastEditors: lwj
 * @Description:vector容器的大小
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Vector/test06.cpp
 **/
#include <iostream>
#include <vector>

void test01()
{
    std::vector<int> v1;
    for (int i = 0; i < 3; i++)
    {
        v1.push_back(i + 1);
    }
    // * `empty(); `                        //判断容器是否为空
    int emp = v1.empty();
    std::cout << "emp = " << emp << std::endl;

    // * `capacity();`                      //容器的容量
    std::cout << "v1容器的容量为：" << v1.capacity() << std::endl;

    // * `size();`                          //返回容器中元素的个数
    std::cout << "v1容器的元素个数：" << v1.size() << std::endl;

    // * `resize(int num);`                 //重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
    //如果容器变短，则末尾超出容器长度的元素被删除。
    v1.resize(6);
    std::cout << "v1容器的容量为：" << v1.capacity() << std::endl;
    // * `resize(int num, elem);`           //重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
    v1.resize(7, 0);
    std::cout << "v1容器的容量为：" << v1.capacity() << std::endl;
    //如果容器变短，则末尾超出容器长度的元素被删除
}

int main()
{
    test01();
    return 0;
}