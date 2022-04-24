/*
 * @Author: lwj
 * @Date: 2022-04-24 16:58:58
 * @Description:文件读写操作
 */

#include<stdio.h>

int main()
{
    FILE *pf=fopen("test.txt","w");
    if(pf==NULL)//判断文件是否打开成功
    {
        perror("fopen");
        return;
    }
    fclose(pf);//关闭文件
    return 0;
}