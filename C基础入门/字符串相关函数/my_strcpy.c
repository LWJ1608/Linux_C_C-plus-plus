/*
 * @Author: lwj
 * @Date: 2022-03-26 18:43:11
 * @LastEditTime: 2022-04-12 20:47:38
 * @Description:自己模拟实现strcpy函数
 * @FilePath: /C学习/字符串函数/实现strcpy库函数.c
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>
// void my_strcpy(char *dest, const char *src)
// {
//     while (*src != '\0')
//     {
//         *dest = *src;
//         dest++;
//         src++;
//     }
//     *dest = *src;
// }
void my_strcpy(char *dest, const char *src)
{
    assert(src != NULL); //断言，如果不满足条件直接停止运行，然后报告错误
    assert(dest != NULL);
    while (*dest++ = *src++)
    {
    }
}

int main()
{
    char arr1[15] = "1111111111";
    char arr2[] = "hello";
    my_strcpy(arr1, arr2);
    // printf("%s\n", arr1);
    return 0;
}