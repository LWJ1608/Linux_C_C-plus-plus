/**
 * @Author: lwj
 * @Date: 2022-05-03 20:14:06
 * @LastEditTime: 2022-05-03 20:14:09
 * @LastEditors: lwj
 * @Description:vector容器嵌套vector容器
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL/Vector/test03.cpp
 **/

#include <iostream>
#include <vector>

using namespace std;

void test01()
{
    vector<vector<int>> V; //大容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    for (int i = 0; i < 3; i++)
    {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
    }
    // vector容器存放vector容器

    V.push_back(v1);
    V.push_back(v2);
    V.push_back(v3);
    V.push_back(v4);

    //遍历
    for (vector<vector<int>>::iterator it = V.begin(); it != V.end(); it++)
    {
        for (vector<int>::iterator vit = it->begin(); vit != it->end(); vit++)
        {
            cout << *vit << " ";
        }
        cout << endl;
    }
}
int main()
{
    test01();
    return 0;
}