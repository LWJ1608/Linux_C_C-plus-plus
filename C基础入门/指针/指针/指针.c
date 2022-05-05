/*
 * @Author: lwj
 * @Date: 2022-03-25 18:23:02
 * @LastEditTime: 2022-03-25 19:40:32
 * @Description:指针的简单认识
 * @FilePath: /C学习/指针/指针.c
 */

#include <stdio.h>

int main()
{
    char i, *a, **b, *c;
    i = 9;
    a = &i; //指针a指向i的地址,*a=i=9
    printf("*a = %d\n", *a);
    printf("i的地址为：%p\n\n", &i); //&i==a

    // b=a;//错误，b的类型为char* *，而a的类型是char*
    b = &a;
    printf("b的值为：%d\n\n", b);
    return 0;
}