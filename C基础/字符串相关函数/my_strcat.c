/*
 * @Author: lwj
 * @Date: 2022-04-12 20:19:05
 * @Description:模拟实现strcat函数
 */

// char*strcpy(char*destination, constchar*source );
/*
源字符串必须以'\0'结束。
会将源字符串中的'\0'拷贝到目标空间。
目标空间必须足够大，以确保能存放源字符串。
目标空间必须可变。
学会模拟实现。
*/

#include <stdio.h>
#include <assert.h>
// #include <string.h>
void my_strcat(char *s1, const char *s2)
{
    while (*s1)
    {
        s1++;
    }
    while (*s1++ = *s2++)
    {
        ;
    }
}
int main()
{
    char arr1[8] = "aewere";
    char arr2[] = "fwe";
    int i = 0;
    int num = sizeof(arr1) / sizeof(arr1[0]);
    my_strcat(arr1, arr2);
    printf("%s\n", arr1);

    return 0;
}