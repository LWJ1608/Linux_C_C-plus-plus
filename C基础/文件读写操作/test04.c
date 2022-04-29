/*
 * @Author: lwj
 * @Date: 2022-04-29 09:37:24
 * @Description:sprintf和sscanf的使用
 */
// int sprintf(char *str, const char *format, ...);//将格式化数据读入字符串(str)中
// int sscanf(const char *s, const char *format, ...);从字符串（s）中读取格式化数据
#include <stdio.h>

int main()
{
    char buffer[15];
    int n, a = 5, b = 3;
    sprintf(buffer, "%d %d %d", a, b, a + b);
    printf("%s\n", buffer);
    int arr[15] = {0};

    sscanf(buffer, "%d %d %d ", &arr[0], &arr[1], &arr[2]); //把buffer中的字符串，转换成整形，依次放入arr中
    printf(buffer, "%s\n", arr);

    return 0;
}