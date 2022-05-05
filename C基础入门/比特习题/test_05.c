/*
 * @Author: lwj
 * @Date: 2022-04-02 21:07:42
 * @LastEditTime: 2022-04-06 08:50:19
 * @Description:杨辉三角问题
 * @FilePath: /C初级学习/比特习题/test_05.c
 */

// 1
// 1 1
// 1 2 1
// 1 3  3  1
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    int arr[10][10] = {0};
    //数组赋值
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
            }
            if (i == j)
            {
                arr[i][j] = 1;
            }
            if (i >= 2 && j >= 1)
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
        }
    }
    //打印数组
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d\t ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
