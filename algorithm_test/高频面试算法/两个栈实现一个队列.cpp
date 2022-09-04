/**
 * @Author: lwj
 * @Date: 2022-09-03 15:35:29
 * @FilePath: /Linux_C_C-plus-plus/algorithm_test/两个栈实现一个队列.cpp
 * @Description:两个栈实现一个队列
 **/
//思路：本题主要是利用栈的先进后出的特点，先把数据放到第一个栈中，
//在出栈后再把第一个栈中的元素一一放入第二个栈中再出栈，这样就能完成一个先进先出的队列
#include <iostream>
#include <stack>
using namespace std;

template <typename T>
class Queue
{
public:
private:
    stack<T> s1;
    stack<T> s2;
};

int main(void)
{
    Queue<int> t;
    int num;

    for (int i = 0; i < 7; i++)
    {
        t.push_(i);
    }

    for (int i = 0; i < 6; i++)
    {
        num = t.pop_();
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
