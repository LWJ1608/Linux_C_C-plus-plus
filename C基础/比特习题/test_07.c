/*
 * @Author: lwj
 * @Date: 2022-04-12 19:10:37
 * @Description:输入行数，输出由“*”组成X形的图案
 */
#include <stdio.h>

void printX()
{
    int num = 5;
    printf("请输入图案打印的行数>");
    while (scanf("%d", &num) != EOF)
    {
        int i = 0;
        for (i = 0; i < num; i++)
        {
            int j = 0;
            for (j = 0; j < num; j++)
            {
                if (i == j)
                {
                    printf("*");
                }
                else if (i + j == num - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        break;
    }
}

int main()
{
    printX();
    return 0;
}
