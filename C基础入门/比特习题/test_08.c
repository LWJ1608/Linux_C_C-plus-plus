/*
 * @Author: lwj
 * @Date: 2022-04-22 08:55:53
 * @Description:输入一排升序的整数，然后插入一个整数后还是升序
 */

#include <stdio.h>

int main()
{
    int n;
    int arr[10] = {0};
    printf("请输入一个5到10的数>");
    while (1)
    {
        scanf("%d", &n);
        if (n >= 1 && n <= 10)
        {
            break;
        }
        printf("输入错误，请重新输入！");
    }
    int num, n1;
    int i = 0;
    n1 = n;
    for (i = 0; i < n1; i++)
    {
        arr[i] = i * i;
    }
    printf("请输入要插入的整数>");
    scanf("%d", &num);
    while (n1 - 1 >= 0)
    {
        if (arr[n1 - 1] > num)
        {
            arr[n1] = arr[n1 - 1];
        }
        else
        {
            arr[n1] = num;
            break;
        }
        n1--;
        if (n < 0)
        {
            arr[n1] = num;
            break;
        }
    }
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}