/*
 * @Author: lwj
 * @Date: 2022-04-01 19:23:06
 * @LastEditTime: 2022-04-02 21:15:59
 * @Description:逆序一个字符串数组
 * @FilePath: /C初级学习/比特习题/test_04.c
 */

#include <stdio.h>

void str_ex(char *arr, int count)
{
    char tmp;
    int i = 0;
    for (i = 0; i < count / 2; i++)
    {
        tmp = arr[i];
        arr[i] = arr[count - i - 1];
        arr[count - i - 1] = tmp;
    }
}
void printStr(const char *arr2, int count)
{
    int i = 0;
    for (i = 0; i < count; i++)
    {
        printf("%c ", *arr2);
        arr2++;
    }
    printf("\n");
}
int main()
{
    char arr[] = "sfsfegaga";
    int count1 = sizeof(arr) / sizeof(arr[0]);
    str_ex(arr, count1);
    printStr(arr, count1);
    return 0;
}
