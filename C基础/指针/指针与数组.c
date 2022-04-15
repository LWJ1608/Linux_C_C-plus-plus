/*
 * @Author: lwj
 * @Date: 2022-03-25 19:42:30
 * @LastEditTime: 2022-03-26 14:45:44
 * @Description:指针与数组的关系
 * @FilePath: /C学习/指针/指针与数组.c
 */

#include <stdio.h>

int main()
{
    // int arr[8] = {1, 1, 2, 3, 4};
    // int *a = 0;
    // // 数组名称的本质：是该数组的首地址常量。
    // a = arr; //相当于把数组的第一个元素地址赋给指针a
    // // arr()
    // printf("a的值为：%d\n", *a);

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;
    int *tmp = arr + 9;
    while (p <= tmp)
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    return 0;
}