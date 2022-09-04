/**
 * @Author: lwj
 * @Date: 2022-09-04 11:50:21
 * @FilePath: /Linux_C_C-plus-plus/algorithm_test/高频面试算法/进制转换.cpp
 * @Description:
 **/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 将十进制转换为任意进制
// 其他进制向十进制的转换--->进行每位的乘积求和即可
// 在进制的转换当中十进制是中间的桥梁;
int main(void)
{
    vector<char> v1;
    int number;
    int r;
    char tmp;

    printf("请输入要转换的数字: ");
    // scanf("%d", &number);
    cin >> number;
    printf("请输入进制数: ");
    // scanf("%d", &r);
    cin >> r;

    while (number)
    {
        tmp = "0123456789ABCDEF"[number % r];
        v1.push_back(tmp);
        number /= r;
    }
    reverse(v1.begin(), v1.end());
    for (vector<char>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        cout << *it;
    }
    cout << endl;

    return 0;
}