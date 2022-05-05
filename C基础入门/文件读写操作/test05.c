/*
 * @Author: lwj
 * @Date: 2022-04-29 11:05:23
 * @Description:fseek和ftell函数的使用
 */
// int fseek ( FILE * stream, long int offset, int origin );//重新定位流位置
// long int ftell(FILE *stream);//返回相对起始位置的偏移量
// void rewind ( FILE * stream );//让流指针回到起始位置

#include <stdio.h>

int main()
{
    FILE *pf = fopen("test05.txt", "r");
    if (pf == NULL)
    {
        perror("fopen");
        return 1;
    }
    int ch = fgetc(pf); //从流指针开始读取一个字符
    printf("%c\n", ch);

    fseek(pf, 2, SEEK_CUR); //从当前位置向右移动两个位置
    ch = fgetc(pf);
    printf("%c\n", ch);

    int index = ftell(pf); // 返回相对起始位置的偏移量 return 0;
    printf("%d\n", index);

    rewind(pf); //让流指针回到起始位置
    printf("%d\n", ftell(pf));
}