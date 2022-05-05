/*
 * @Author: lwj
 * @Date: 2022-03-27 18:32:45
 * @LastEditTime: 2022-03-27 20:04:53
 * @Description:判断当前机器的字节序
 * @FilePath: /C初级学习/数据存储问题/大小端字节序.c
 */

//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中，如存入二进制数000001，内存中则按000001存储
//小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位,   保存在内存的高地址中，如存入二进制数000001，内存中则按100000存储

#include <stdio.h>

inline int check_sys()
{
    int i = 1;
    char *p = (char *)&i;
    return *p;
}
int main()
{
    int num = check_sys();
    if (num == 1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    return 0;
}
