/*
 * @Author: lwj
 * @Date: 2022-03-30 19:41:40
 * @LastEditTime: 2022-04-22 16:09:06
 * @Description:写一个函数打印arr数组的内容，不使用数组下标，使用指针,arr是一个整形一维数组。
 * @FilePath: /C初级学习/比特习题/test_02.c
 */

#include <stdio.h>

int printArr(const int *arr1, const int *len1)
{
    int i = 0;
    for (i = 0; i < *len1; i++)
    {
        printf("%d ", *(arr1 + i));
    }
    printf("\n");
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 6};
    int len = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, &len);
    return 0;
}