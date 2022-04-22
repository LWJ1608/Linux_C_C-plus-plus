/*
 * @Author: lwj
 * @Date: 2022-03-23 16:09:19
 * @LastEditTime: 2022-03-26 19:02:55
 * @Description:库函数-字符串函数的使用
 * @FilePath: /C学习/字符串函数/字符串函数.c
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *arr = NULL;
    char a[30] = "11223344aabbcc";
    char b[30];
    // string.h
    //  strlen() 函数的工作原理：统计所有字符的个数，直到遇到'\0'（结束标志）。
    int count = strlen(a); //
    printf("a的字符个数为：%d\n\n", count);

    // strcpy(s1,s2)//把s2的字符串赋值s1
    strcpy(b, a);
    printf("b的值为：%s\n\n", b);

    // strcat(s1,s2)将s1和s2的字符串连接然后赋值给s1
    strcat(a, b);
    printf("a的值为：%s\n\n", a);
    const char cha = 'a';
    // strstr()查找字符串第一次出现的位置
    // strchr()查找字符第一次出现的位置
    // strrchr()查找字符最后一次出现的位置
    char *i = strchr(a, cha);
    printf("a第一次出现的下标：%s\n\n", i);

    // subString意思为：子串
    // 功能：查找 subString 第一次出现的地址值，若 subString 不是 string 的子串，则返回 NULL。

    // strcmp()比较 s1 和 s2 所指向的字符串的内容
    // 若 s1 字符串内容小于 s2 字符串内容，则返回值为负整数；若 s1 字符串内容大于 s2 字符串内容，则返回值为正整数；若二者内容相等，则返回为0。
    int num = strcmp(a, b);

    return 0;
}
