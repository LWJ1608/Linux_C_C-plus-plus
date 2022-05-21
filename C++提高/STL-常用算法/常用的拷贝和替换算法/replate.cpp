/**
 * @Author: lwj
 * @Date: 2022-05-21 21:57:10
 * @LastEditTime: 2022-05-21 21:57:10
 * @LastEditors: lwj
 * @Description:replate算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用的拷贝和替换算法/replate.cpp
 **/
#include <iostream>
#include <algorithm>
#include <vector>

class myPrint
{
public:
    void operator()(int val)
    {
        std::cout << val << " ";
    }
};

void test01()
{
    std::vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(50);
    v.push_back(10);
    v.push_back(20);

    std::cout << "替换前：" << std::endl;
    for_each(v.begin(), v.end(), myPrint());
    std::cout << std::endl;

    //将容器中的20 替换成 2000
    std::cout << "替换后：" << std::endl;
    replace(v.begin(), v.end(), 20, 2000);
    for_each(v.begin(), v.end(), myPrint());
    std::cout << std::endl;
}

int main()
{
    test01();

    return 0;
}