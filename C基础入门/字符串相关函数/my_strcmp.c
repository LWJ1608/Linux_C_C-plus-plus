/*
 * @Author: lwj
 * @Date: 2022-04-13 13:28:37
 * @Description:模拟实现strcmp
 */

// int strcmp(const char *str1, const char *str2);
/*
第一个字符串大于第二个字符串，则返回大于0的数字
第一个字符串等于第二个字符串，则返回0
第一个字符串小于第二个字符串，则返回小于0的数字
*/
#include <stdio.h>
#include <assert.h>

int my_strcmp(const char *arr1, const char *arr2)
{
    assert(arr1 && arr2);
    while (*arr1 == *arr2)
    {
        if (*arr1 == '\0')
        {
            return 0;
        }
        arr1++;
        arr2++;
    }
    return *arr1 - *arr2;
}
int main()
{
    char *s1 = "asafsdaf";
    char *s2 = "asdaasf";
    int ren = my_strcmp(s1, s2);
    printf("%d\n", ren);
    return 0;
}