/*
 * @Author: lwj
 * @Date: 2022-03-26 20:18:20
 * @LastEditTime: 2022-04-12 20:47:38
 * @Description:自己模拟实现strlent函数
 * @FilePath: /C学习/字符串相关函数/模拟实现strlen函数.c
 */

#include <stdio.h>
#include <assert.h>
size_t my_strlen(const char *str)
{
    int count = 0;
    assert(str);
    while (*str != '\0')
    {
        count++;
        str++;
    }

    return count;
}

int main()
{
    char arr1[] = "222222333333";
    char arr2[] = "";
    int num = my_strlen(arr2);
    printf("arr2有%d个元素\n", num);
    return 0;
}