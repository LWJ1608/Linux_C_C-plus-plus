/*
 * @Author: lwj
 * @Date: 2022-04-07 19:53:31
 * @Description:结合qsort函数，用回调函数思维来实现冒泡排序
 */

#include <stdio.h>

void Swap(char *c1, char *c2, size_t width1) //交换两个比较大小的值
{
    int i = 0;
    char c3;
    for (i = 0; i < width1; i++)
    {
        c3 = *c1;
        *c1 = *c2;
        *c2 = c3;
        c1++;
        c2++;
    }
}
void bubble_sort(void *base, size_t size, size_t width, int (*cmp)(const void *s1, const void *s2))
{
    int i = 0, j = 0;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (cmp((char *)base + j * width, (char *)base + (j + 1) * width) > 0)
            //思路：一个char类型一个字节，加上j*width的值就是所要排序类型单个值的大小
            {
                Swap((char *)base + j * width, (char *)base + (j + 1) * width, width); //交换两个值
            }
        }
    }
}

int compare_int(const void *arr1, const void *arr2) //传入bubble_sort的比较函数
{
    return *(int *)arr1 - *(int *)arr2;
}
void print_int(const int *arr3, size_t size) //输出
{
    int i = 0;
    for (i = 0; i < 6; i++)
    {
        printf("%d ", *(arr3 + i));
    }
    printf("\n");
}
int main()
{
    int arr[6] = {1, 4, 57, 3, 322, 0};
    compare_int(&arr[0], &arr[1]);
    bubble_sort(arr, 6, 4, compare_int);
    print_int(arr, 6);
    return 0;
}