/*
 * @Author: lwj
 * @Date: 2022-04-14 11:23:52
 * @Description:模拟实现strtok
 */

//  char * strtok ( char * str, const char * sep );
//  sep参数是个字符串，定义了用作分隔符的字符集合
//  第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标
//  记。
//  strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。（注：
//  strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容
//  并且可修改。）
//  strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串
//  中的位置。
//  strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标
//  记。
//  如果字符串中不存在更多的标记，则返回 NULL 指针。

#include <stdio.h>
#include <string.h>
char *my_strtok(char *s1, const char *s2)
{
    char *arr1 = s1;
    char *tmp = NULL;
    static char *s3; //静态变量，记录上一次
    if (arr1 == NULL)
    {
        s3++;
        arr1 = s3;
    }
    while (*arr1) //通过字符串的字符一个一个与分隔符作对比
    {
        char *arr2 = (char *)s2;                //对比下一个字符的时候，通过这个变量回到首地址
        while (*arr2 != '\0' && *arr1 != *arr2) //
        {
            arr2++;
        }
        if (*arr1 == *arr2) //记录并返回值
        {
            if (s3 == NULL)
            {
                s3 = arr1;
                *arr1 = '\0';
                return s1;
            }
            else
            {
                tmp = s3;
                s3 = arr1;
                *arr1 = '\0';
                return tmp++;
            }
        }
        arr1++;
    }
    if (s3 == NULL)
    {
        return NULL;
    }
    else
    {
        return s3++;
    }
}
int main()
{
    char arr[] = "afad@asdf.com";
    char tmp[20] = "";
    strcpy(tmp, arr);
    char set[] = "@.";
    char *ret = NULL;
    for (ret = my_strtok(tmp, set); ret != NULL; ret = my_strtok(NULL, set))
    {
        printf("%s\n", ret);
    }
    return 0;
}
