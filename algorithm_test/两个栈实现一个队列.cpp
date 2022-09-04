/**
 * @Author: lwj
 * @Date: 2022-09-03 15:35:29
 * @FilePath: /Linux_C_C-plus-plus/algorithm_test/两个栈实现一个队列.cpp
 * @Description:
 **/
#include <iostream>
#include <stack>
using namespace std;

class Test
{
public:
    void push_(int data)
    {
        st1.push(data);
    }
    int pop_()
    {
        int tmp;

        if (st2.empty())
        {
            while (!st1.empty())
            {
                int element = st1.top();
                st1.pop();
                st2.push(element);
            }
        }

        if (!st2.empty())
        {
            tmp = st2.top();
            st2.pop();
        }

        return tmp;
    }

private:
    stack<int> st1;
    stack<int> st2;
};

int main(void)
{
    Test t;
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
