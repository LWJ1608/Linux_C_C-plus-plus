/*
 * @Author: lwj
 * @Date: 2022-03-30 18:52:13
 * @LastEditTime: 2022-04-02 21:15:58
 * @Description:求Sn= a+aa+aaa+aaaa+aaaaa的前五项和，其中a是一个数字
 * @FilePath: /C初级学习/比特习题/test_01.c
 */

#include <stdio.h>

int numSn(const int *a)
{
    int i = 0;
    int j = 0;
    for (i = 0; i < 5; i++)
    {
        j += *a * 10 + *a;
    }
    return j;
}
int main()
{
    int a = 0;
    printf("请输入一个数字：\n");
    scanf("%d", &a);
    int count = numSn(&a);
    printf("结果为：%d\n", count);
    return 0;
}