/**
 * @Author: lwj
 * @Date: 2022-05-09 10:09:08
 * @LastEditTime: 2022-05-09 10:09:08
 * @LastEditors: lwj
 * @Description:deque容器数据的删除和插入
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Deque/test04.cpp
 **/
#include <iostream>
#include <deque>

void printDeque(std::deque<int> &d)
{
    for (std::deque<int>::iterator it = d.begin(); it != d.end(); it++)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}
// 两端插入删除操作：
void test01()
{

    std::deque<int> d1;
    //从尾部插入数据
    d1.push_back(88);
    d1.push_back(88);
    printDeque(d1);

    //从头部插入数据
    d1.push_front(99);
    d1.push_front(99);
    printDeque(d1);

    //从尾部删除数据
    d1.pop_back();
    d1.pop_back();
    printDeque(d1);

    //从头部删除数据
    d1.pop_front();
}
// 指定位置操作：
void test02()
{
    std::deque<int> d2;
    std::deque<int> d3;
    for (int i = 1; i < 6; i++)
    {
        d2.push_back(i);
        d3.push_back(i + 6);
    }
    // `insert(pos,elem);`         //在迭代器指向的pos位置插入一个elem元素的拷贝，返回新数据的位置。
    d2.insert(d2.begin() + 3, 99);
    printDeque(d2);

    // insert(pos,n,elem);`     //在pos位置插入n个elem数据，无返回值。)
    d2.insert(d2.end(), 2, 0);
    printDeque(d2);

    // `insert(pos,beg,end);`    //在pos位置插入[beg,end)区间的数据，无返回值。
    d2.insert(d2.begin(), d3.begin(), d3.end());
    printDeque(d2);

    // `erase(pos);`                    //删除pos位置的数据，返回下一个数据的位置。
    d2.erase(d2.begin());
    printDeque(d2);
    // * `clear();`                     //清空容器的所有数据
    d2.clear();
    printDeque(d2);
    // * `erase(beg,end);`             //删除[beg,end)区间的数据，返回下一个数据的位置。
}
int main()
{
    // test01();
    test02();
    return 0;
}