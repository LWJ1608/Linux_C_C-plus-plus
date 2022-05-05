/*
 * @Author: lwj
 * @Date: 2022-04-20 11:11:24
 * @Description:realloc函数的使用
 */
// realloc重新开辟空间，
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int *)calloc(10, 4); //开辟10个4字节大小的空间，也就是开辟10个int类型空间
    if (p == NULL)
    {
        perror("main");
        return 1;
    }
    //在p指针指向的空间基础上，将空间增大，如果这个空间不够增大，
    //则找到另一个更大空间把p指向的内容复制到这个新空间中,然后返回这个新空间的地址，如果都没适合的空间，则返回NULL；
    int *prt = realloc(p, 20 * sizeof(int));
    if (prt == NULL)
    {
        perror("main");
        return 1;
    }
    p=prt;
    prt=NULL;
    int i = 0;
    for (i = 0; i < 20; i++)
    {
        printf("%d ", i);
    }
    free(p);
    p=NULL;
    return 0;
}