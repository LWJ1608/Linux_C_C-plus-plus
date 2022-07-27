/**
 * @Author: lwj
 * @Date: 2022-05-09 09:57:31
 * @LastEditTime: 2022-05-09 09:57:31
 * @LastEditors: lwj
 * @Description:deque容器的大小操作
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Deque/test03.cpp
 **/

#include <iostream>
#include <deque>

void test01()
{
    std::deque<int> d1;
    for (int i = 1; i < 6; i++)
    {
        d1.push_back(i); //插入数据
    }

    std::cout << "d1.size() = " << d1.size() << std::endl;
    d1.resize(8); // size()重新指定容器的长度为num,若容器变长，则以默认值填充新位置。
    std::cout << "d1.size() = " << d1.size() << std::endl;
    d1.resize(9, 8); //重新指定容器的长度为num,若容器变长，则以elem值填充新位置。
                     //如果容器变短，则末尾超出容器长度的元素被删除。
}
int main()
{
    test01();
    return 0;
}