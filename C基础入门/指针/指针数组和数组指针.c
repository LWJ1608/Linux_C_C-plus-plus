/*
 * @Author: lwj
 * @Date: 2022-03-29 20:07:10
 * @LastEditTime: 2022-03-29 20:56:48
 * @Description:数组指针和指针数组的区别
 * @FilePath: /C初级学习/指针/指针数组和数组指针.c
 */
//

#include <stdio.h>

void print1(int arr1[3][3], int a, int b) //用数组接收
{
    int i = 0, j = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
}

void print2(int (*arr2)[3], int a, int b) //使用数组指针来接收数组首元素地址，多维数组的首元素地址是第一行元素的地址
{
    int i = 0, j = 0;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("%d ", *(*(arr2 + i) + j));
        }
        printf("\n");
    }
}
int main()
{
    // int arr[3] = {1, 1, 2};
    // //两者虽然值都一样，但是他们的数据类型不一样
    // int *arr1[3] = arr;   //指针数组，arr1存放的arr首元素的地址
    // int(*arr2)[3] = &arr; //数组指针，arr2存放的是arr整个 这个数组的地址，数组指针通常使用在二维数组及以上数组

    //如下例子：
    int arr[3][3] = {1, 2, 4, 1, 3, 5, 6, 4, 5};
    print1(arr, 3, 3);
    print2(arr, 3, 3);
    return 0;
}