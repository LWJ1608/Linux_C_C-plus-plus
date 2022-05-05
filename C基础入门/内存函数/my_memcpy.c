/*
 * @Author: lwj
 * @Date: 2022-04-15 09:14:46
 * @Description:模拟实现memcpy函数
 */

// void *memcpy(void *destination, const void *source, size_t num);
//复制内存块
//将num字节的值从source指向的位置直接 复制到destination指向的内存块。源指针和目标
//指针指向 的对象的底层类型与此函数无关；结果是数据的二进制副本。 该函数不检查源中的任何终止空字符 -
//它总是精确复制num个字节。为避免溢出，目标和源参数 指向的数组的大小应至少为num
//字节，并且不应重叠（对于重叠的内存块，memmove是一种更安全的方法）。

#include <stdio.h>
#include <assert.h>

void *my_memcpy(void *dest, const void *src, size_t num)
{
    assert(dest && src);
    void *tmp = dest; //记录初始化位置，程序结束返回
    while (num--)
    {
        *(char *)dest = *(char *)src;
        dest = (char *)dest + 1;
        src = (char *)src + 1;
    }
    return tmp;
}

int main()
{
    int arr1[15] = {8, 9, 7, 6, 5, 4, 6, 88, 5, 5};
    int arr2[6] = {1, 2, 5, 6, 7};
    int *tmp = my_memcpy(arr1, arr2, 20);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", *tmp++);
    }
    return 0;
}