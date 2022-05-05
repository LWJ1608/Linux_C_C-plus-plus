/*
 * @Author: lwj
 * @Date: 2022-04-17 08:46:11
 * @Description:联合体的使用
 */
//联合体也叫共用体，它的成员共用一块内存空间，它的大小至少是最大成员类型的大小
//如果它的成员其中一个改变那么，另一个也会改变，所以它们不能同时使用

//判断机器的存储方式（大小端）
#include <stdio.h>

int check_sys()
{
    ///方法一：
    // int i = 1;
    // char *tmp = *(char *)&i;
    // if (*tmp == 1)
    // {
    //     return 1;//小端
    // }
    // else
    // {
    //     return 0;//大端
    // }

    ///方法二：
    union U //联合体
    {
        char a1;
        int a2;
    } u;
    u.a1 = 1;
    return u.a1;
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