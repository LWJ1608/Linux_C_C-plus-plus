/*
 * @Author: lwj
 * @Date: 2022-03-28 20:51:47
 * @LastEditTime: 2022-03-29 18:30:41
 * @Description:测试对指针和数组在内存中的数据存储理解深度
 * @FilePath: /C初级学习/指针/指针和数组内存问题.c
 */

#include <stdio.h>

int main()
{
    char arr1[] = "hello";
    char arr2[] = "hello";
    char *arr3 = "hello";
    char *arr4 = "hello";

    if (arr1 == arr2)
    {
        printf("arr1==arr2\n");
    }
    else
    {
        printf("arr1!=arr2\n");
    }
    if (arr3 == arr3)
    {
        printf("arr3==arr4\n");
    }
    else
    {
        printf("arr3!=arr4\n");
    }
    return 0;
}
//结果为：
// arr1 != arr2
// arr3 == arr4
//解析：
// arr1和arr2是不同的数组，创建时开辟了不同的空间，而数组名代表的是数组第一个元素的地址，所以arr1！=arr2
// arr3和arr4都同时指向一个常量，而常量不能被修改，因此系统只会开辟一个空间，然后让两个指针同时指向这个常量