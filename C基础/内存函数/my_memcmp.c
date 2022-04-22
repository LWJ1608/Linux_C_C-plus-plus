/*
 * @Author: lwj
 * @Date: 2022-04-15 13:10:18
 * @Description:模拟实现my_memcmp
 */

// int memcmp(const void *ptr1, const void *ptr2, size_t num);
// 比较两个内存块
//将ptr1指向的内存块的前num字节与ptr2指向的前num字节进行比较，
//如果它们都匹配则返回零，或者如果不匹配则返回一个不同于零的值表示哪个更大。
//请注意，与strcmp不同，该函数在找到空字符后不会停止比较。

#include <stdio.h>
#include <assert.h>

int my_memcmp(const void *arr1, const void *arr2, size_t num)
{
    assert(arr1 && arr2); //
    while (num--)
    {
        if (*(char *)arr1 == *(char *)arr2) //一个个字节比较内存里的值
        {
            arr1 = (char *)arr1 + 1;
            arr2 = (char *)arr2 + 1;
        }
        else
        {
            return *(char *)arr1 - *(char *)arr2; //不相等，返回它们的差
        }
    }
    return 0;
}
int main()
{
    int arr1[5] = {2, 4, 5, 7};
    int arr2[3] = {2, 4, 8};
    int tmp = my_memcmp(arr1, arr2, 12);
    printf("%d\n", tmp);
    return 0;
}
