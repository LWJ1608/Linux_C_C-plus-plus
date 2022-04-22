/*
 * @Author: lwj
 * @Date: 2022-04-15 10:25:14
 * @Description:模拟实现my_memmove
 */

// void *memmove(void *destination, const void *source, size_t num);
// 移动内存块
//将num个字节的值从source指向的位置 复制到destination指向的内存块。
//复制就像使用中间缓冲区一样进行，允许目标和源重叠。
//源指针和目标指针指向的对象的底层类型与此函数无关；结果是数据的二进制副本。
//该函数不检查源中的任何终止空字符它总是精确复制num个字节。
//为了避免溢出，两个指向的数组的大小目标和源参数，应至少为num个字节。

#include <stdio.h>
#include <assert.h>
void *my_memmove(void *dest, const void *src, size_t num)
{
    void *ret = dest;
    assert(dest && src);
    if (dest < src)
    {
        while (num--)
        {
            *(char *)dest = *(char *)src; //从前往后赋值
            dest = (char *)dest++;
            src = (char *)src++;
        }
    }
    else
    {
        while (num--) //
        {
            *((char *)dest + num) = *((char *)src + num); //从后往前赋值
        }
    }
    return ret;
}
int main()
{
    int arr1[15] = {8, 9, 7, 6, 5, 4, 6, 88, 5, 5};
    int *tmp = my_memmove(arr1 + 3, arr1, 20);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr1[i]);
    }
    return 0;
}