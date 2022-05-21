/**
 * @Author: lwj
 * @Date: 2022-05-21 21:57:10
 * @LastEditTime: 2022-05-21 21:57:10
 * @LastEditors: lwj
 * @Description:replate算法的使用
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL-常用算法/常用的拷贝和替换算法/replate.cpp
 **/、
#include <iostream>
#include <algorithm>
#include <vector>

    class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(50);
    v.push_back(10);
    v.push_back(20);

    cout << "替换前：" << endl;
    for_each(v.begin(), v.end(), myPrint());
    cout << endl;

    //将容器中的20 替换成 2000
    cout << "替换后：" << endl;
    replace(v.begin(), v.end(), 20, 2000);
    for_each(v.begin(), v.end(), myPrint());
    cout << endl;
}

int main()
{

    test01();

    system("pause");

    return 0;
}