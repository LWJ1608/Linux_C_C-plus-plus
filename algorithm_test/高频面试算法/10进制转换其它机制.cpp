/**
 * @Author: lwj
 * @Date: 2022-09-04 11:50:21
 * @FilePath: /Linux_C_C-plus-plus/algorithm_test/高频面试算法/进制转换.cpp
 * @Description:
 **/
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;

// 将十进制转换为任意进制
// 其他进制向十进制的转换--->进行每位的乘积求和即可
// 在进制的转换当中十进制是中间的桥梁;
void conversion(int num, int M)
{
    stack<int> s;
    while (num)
    {
        int tmp = "0123456789ABCDEFG"[num % M];
        s.push(tmp);
        tmp /= M;
    }
    int n;
    while (s.empty())
    {
        n = s.top();
        cout << n;
        s.pop();
    }
    cout << endl;
}
int main(void)
{
    int num, M;
    cout << "请输入一个十进制的数> ";
    cin >> num;
    cout << "请输入需要转换的数> ";
    cin >> M;
    conversion(num, M);

    return 0;
}