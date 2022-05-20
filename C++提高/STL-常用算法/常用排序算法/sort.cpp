/**
 * @Author: lwj
 * @Date: 2022-05-20 20:19:44
 * @LastEditTime: 2022-05-20 20:19:45
 * @LastEditors: lwj
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用排序算法/test01.cpp
 **/
// **功能描述：**
// * 对容器内元素进行排序
// 函数原型：
// - `sort(iterator beg, iterator end, _Pred);  `
// 按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//  beg    开始迭代器
//  end    结束迭代器
// _Pred  谓词

#include <iostream>
#include <vector>
#include <algorithm>

void myPrint(int val)
{
    std::cout<<val<" ";
}

//内置类型排序
void test01()
{
    std::vector<int> v1;
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(33);
    v1.push_back(22);
    v1.push_back(7);
    v1.push_back(3);
    //默认排序，有小到大排序
    std::sort(v1.begin(),v1.end());

}
int main()
{
    test01();
    return 0;
}
