/*
 * @Author: lwj
 * @Date: 2022-04-24 19:47:02
 * @Description:字符输入（fgetc）输出（fputc）函数的使用
 */

#include <stdio.h>

int main()
{
    FILE *pf = fopen("test02.txt", "w");
    if (pf == NULL)
    {
        perror("fopen");
        return;
    }
    fputc('c', pf);//字符写入
    fclose(pf);
    pf = fopen("test02.txt", "r");
    if (pf == NULL)
    {
        perror("fopen");
        return;
    }
    int pet = fgetc(pf);//字符读取
    int i = 0;
    printf("%c ", pet);
    fclose(pf);
    return 0;
}