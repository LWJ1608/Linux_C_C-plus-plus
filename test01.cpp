/**
 * @Author: lwj
 * @Date: 2022-05-23 13:08:35
 * @LastEditTime: 2022-05-23 13:08:35
 * @LastEditors: lwj
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/test01.cpp
 **/
#include <stdio.h>
#include <string.h>
void sortByA(char **str, int count);
void sortByA(char **str, int count)
{
    int i;
    int j;
    char *tmp;
    for (i = 0; i < count; i++)
    {
        for (j = i + 1; j < count; j++)
        {
            if ((strcmp(*(str + i), *(str + j))) > 0)
            { //交换的是指针变量;
                tmp = *(str + i);
                *(str + i) = *(str + j);
                *(str + j) = tmp;
            }
        }
    }
}
int main(void)
{
    char *array[] = {"aaaa", "bbbb", "ccccc", "dddd"};
    int count = sizeof(array) / sizeof(array[0]);
    int i;
    sortByA(array, count);
    for (i = 0; i < count; i++)
    {
        printf("%s ", array[i]);
    }
    printf("\n");
}