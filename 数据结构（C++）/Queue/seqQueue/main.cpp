/**
 * @Author: lwj
 * @Date: 2022-05-31 15:16:14
 * @Description:测试循环队列
 * @FilePath: /Linux_C_C-plus-plus/数据结构（C++）/Queue/seqQueue/main.cpp
 **/
#include <iostream>
using namespace std;
#include "seqQueue.h"

void testQueue(seqQueue<int> &p)
{
    cout << "插入和取出测试：" << endl;
    for (int i = 0; i < 4; i++)
    {
        p.enQueue(i);
    }
    cout << "队列大小为：" << p.size() << endl;
    while (!p.empty())
    {
        cout << p.deQueue() << " ";
    }
    cout << endl;
    cout << "队首值为：" << p.getPop() << endl;
}

int main()
{
    seqQueue<int> s1;
    testQueue(s1);
    return 0;
}