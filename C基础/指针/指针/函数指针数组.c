/*
 * @Author: lwj
 * @Date: 2022-04-06 19:39:02
 * @LastEditTime: 2022-04-06 20:53:00
 * @Description:函数指针数组的简单使用
 * @FilePath: /C初级学习/指针/函数指针数组.c
 */

#include <stdio.h>
int Add(int a, int b)
{
    return a + b;
}
int Sub(int x, int y)
{
    return x - y;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int x, int y)
{
    return x / y;
}
void menu()
{
    printf("***********************************\n");
    printf("******1.add                     2.sub********\n");
    printf("******3.mul                     4.div ********\n");
    printf("******                 0.exit                ********\n");
    printf("***********************************\n");
}
int main()
{
    // int (*pf1)(int, int) = Add; //函数指针
    // int (*pf2)(int, int) = Sub;
    // int (*pf3[])(int, int) = {Add, Sub};//pf3是函数指针数组
    int num_input = 0;
    int a = 0;
    int b = 0;
    do
    {

        menu();
        int (*arrP[5])(int, int) = {NULL, Add, Sub, mul, div};
        printf("请输入选项>");
        scanf("%d", &num_input);
        if (num_input > 0 && num_input <= 4)
        {
            printf("请输入两个操作数>\n");
            scanf("%d %d", &a, &b);
            int ret = arrP[num_input](a, b);
            printf("计算结果为：%d\n", ret);
        }
        else if (num_input == 0)
        {
            printf("退出程序！\n");
            break;
        }
        else
        {
            printf("输入错误，请重新输入\n");
        }

    } while (num_input);

    return 0;
}