/*
 * @Author: lwj
 * @Date: 2022-04-24 20:18:24
 * @Description:字符串的输入（fgets）输出（fputs）函数的使用
 */
#include <stdio.h>

int main()
{
    FILE *pf = fopen("test03.txt", "w");
    if (pf == NULL)
    {
        perror("fopen");
        return;
    }
    fputs("abcdef", pf); //字符串写入文件
    fclose(pf);
    pf = fopen("test03.txt", "r");
    if (pf == NULL)
    {
        perror("fopen");
        return;
    }
    char arr[10] = {0};
    char *pet = fgets(arr, 10, pf); //从文件读取字符串
    printf("%s ", pet);

    fclose(pf);
    return 0;
}