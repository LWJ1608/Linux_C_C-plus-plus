/*
 * @Author: lwj
 * @Date: 2022-04-06 21:05:05
 * @LastEditTime: 2022-04-06 21:18:25
 * @Description:
 * @FilePath: /C初级学习/指针/test.c
 */

#include <stdio.h>

int main()
{
    int arr[4] = {1};
    int(*p)[2] = {&arr};
    printf("%d", *p);
    return 0;
}