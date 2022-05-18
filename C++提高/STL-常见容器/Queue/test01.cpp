/**
 * @Author: lwj
 * @Date: 2022-05-11 14:12:30
 * @LastEditTime: 2022-05-11 14:12:30
 * @LastEditors: lwj
 * @Description:queue 基本概念
 * @FilePath: /Linux_C_C-plus-plus/C++提高/STL常见容器/Deque/test00.cpp
 **/
// 概念： Queue是一种先进先出 (First In First Out, FIFO)的数据结构，它有两个出口
// 队列容器允许从一端新增元素，从另一端移除元素
// 队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
// 队列中进数据称为 --- 入队    push
// 队列中出数据称为 --- 出队    pop
#include <iostream>
#include <queue>

void test01()
{
    std::queue<int> q1;     //默认构造
    std::queue<int> q2(q1); //拷贝构造
    std::queue<int> q3;
    q3 = q2; //等号重载赋值

    for (int i = 0; i < 5; i++)
    {
        q1.push(i); //入队
    }

    int f = q1.front(); //返回队列第一个元素
    int b = q1.back();  //返回队列最后一个元素
    std::cout << "q1.front() = " << f << std::endl;
    std::cout << "q1.back() = " << b << std::endl;

    q1.pop();   //移除队列中的第一个元素
    q1.empty(); //判空
    q1.size();  //返回容器大小
}
int main()
{
    test01();
    return 0;
}