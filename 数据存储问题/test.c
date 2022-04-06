/*
 * @Author: lwj
 * @Date: 2022-03-27 20:27:31
 * @LastEditTime: 2022-03-27 21:27:22
 * @Description:探讨但char 类型存储一个大于自己所能存贮的数据时会发生什么
 * @FilePath: /C初级学习/数据存储问题/test.c
 */

#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1000];
    int i;
    for (i = 0; i < 1000; i++)
    {
        arr[i] = -1 - i; //当加到-129时char类型存不下，补码的符号位被去除掉，所以-129不会出现
    }
    printf("%d\n", strlen(arr));
    return 0;
}
///答案255
