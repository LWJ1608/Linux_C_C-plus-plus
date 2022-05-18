/**
 * @Author: lwj
 * @Date: 2022-05-03 16:52:44
 * @LastEditTime: 2022-05-03 19:00:33
 * @LastEditors: lwj
 * @Description:初识vector容器
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/Vector/test01.cpp
 **/

// vector数据结构和数组非常相似，也称为单端数组
// vector与普通数组区别:
//不同之处在于数组是静态空间，而vector可以动态扩展

#include <iostream>
#include <vector>
#include <algorithm> //标椎算法头文件

using namespace std;

void printVector(int val)
{
    cout << val << endl;
}
void test01()
{
    vector<int> v1;
    v1.push_back(10); // push_back(尾插法)-向vectot容器插入数据
    v1.push_back(20);
    v1.push_back(30);
    //第一种遍历方式
    vector<int>::iterator itBegin = v1.begin(); //起始迭代器，指向容器第一个元素
    vector<int>::iterator itEnd = v1.end();     //结束迭代器，指向容器最后一个元素的下一个元素
    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }
    //第二种遍历方式
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it << endl;
        itBegin++;
    }
    //第三种遍历方法，利用STL提供的遍历算法
    for_each(v1.begin(), v1.end(), printVector);
}
int main()
{
    test01();
    return 0;
}