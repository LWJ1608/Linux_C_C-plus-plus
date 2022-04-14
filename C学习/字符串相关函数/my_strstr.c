/*
 * @Author: lwj
 * @Date: 2022-04-13 15:11:36
 * @Description:模拟实现strstr
 */

// char * strstr ( const char *str1, const char * str2);
//在str1中找str2的字符串

#include <stdio.h>
#include <assert.h>

char *my_strstr(const char *str1, const char *str2)
{
    assert(str1 && str2);
    const char *s1 = NULL;
    const char *s2 = NULL;
    const char *cp = str1;
    if (*str2 == '\n')
    {
        return (char *)str1;
    }
    while (*cp)
    {
        s1 = cp;
        s2 = str2;
        while (*s1 && *s2 && (*s1 == *s2))
        {
            s1++;
            s2++;
        }
        if (*s2 == '\0')
        {
            return (char *)cp;
        }
        cp++;
    }
    return NULL;
}
int main()
{
    char arr1[] = "dfdgdf";
    char arr2[] = "dfd";
    char *arr = my_strstr(arr1, arr2);
    if (arr)
    {
        printf("存在\n");
    }
    else
    {
        printf("不存在\n");
    }
    return 0;
}