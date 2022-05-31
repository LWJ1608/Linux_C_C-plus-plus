/**
 * @Author: lwj
 * @Date: 2022-05-31 17:25:33
 * @Description:测试链队列功能
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Queue/linkQueue/main.cpp
 **/
#include <iostream>
using namespace std;
#include "linkQueue.h"

void testQueue(linkQueue<int> &p)
{
    cout << "插入和取出测试：" << endl;
    for (int i = 0; i < 4; i++)
    {
        p.push(i);
    }
    cout << "队列大小为：" << p.size() << endl;
    // while (!p.empty())
    // {
    //     cout << p.pop() << " ";
    // }
    cout << endl;
    cout << "队首值为：" << p.front() << endl;
}

int main()
{
    linkQueue<int> s1;
    testQueue(s1);
    return 0;
}