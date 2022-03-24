/*
 * @Author: lwj
 * @Date: 2022-03-24 21:03:50
 * @LastEditTime: 2022-03-24 23:06:33
 * @Description:枚举简单例子
 * @FilePath: /C学习/枚举/枚举.c
 */
#include <stdio.h>

enum Day
{
    MUN = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
} day;

int main()
{
    for (day = MUN; day <= SUN; day++)
    {
        printf("星期%d\n", day);
    }

    return 0;
}