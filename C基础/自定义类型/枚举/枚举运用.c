/*
 * @Author: lwj
 * @Date: 2022-03-24 23:11:07
 * @LastEditTime: 2022-03-24 23:28:09
 * @Description:枚举在switch中使用
 * @FilePath: /C学习/枚举/枚举运用.c
 */

#include <stdio.h>

int main()
{
    enum color
    {
        red = 1,
        greed,
        blue
    } num_color;

    //输入代表颜色的数字
    printf("输入代表你颜色的数字：（1、红色，2、绿色，3、蓝色）\n");
    scanf("%u", &num_color);
    switch (num_color)
    {
    case red:
        printf("红色是你最喜欢的颜色。\n");
        break;
    case greed:
        printf("绿色是你最喜欢的颜色。\n");
        break;
    case blue:
        printf("蓝色是你最喜欢的颜色。\n");
        break;
    default:
        printf("没有你选择颜色的选项！\n");
        break;
    }
}