/*
 * @Author: lwj
 * @Date: 2022-03-30 19:56:47
 * @LastEditTime: 2022-03-30 21:32:09
 * 求出0～100000之间的所有“水仙花数”并输出。
 *“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
 *  如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
 * @FilePath: /C初级学习/比特习题/test_03.c
 */

#include <stdio.h>
#include <math.h>
void printH()
{
    int i = 0;

    for (i = 0; i < 100000; i++)
    {

        //判断位数
        int n = 1;
        int num = 0;
        int tmp = i;
        while (tmp / 10)
        {
            n++;
            tmp = tmp / 10;
        }
        //求位数的n次方和
        tmp = i;
        while (tmp)
        { // pow(tmp % 10, n)
            num += pow(tmp % 10, n);
            tmp = tmp / 10;
        }
        //判断
        if (num == i)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    printH();
    return 0;
}