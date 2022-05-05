/*
 * @Author: lwj
 * @Date: 2022-04-20 11:01:35
 * @Description:calloc开辟堆空间，free释放空间
 */
// calloc初始化为0，malloc不会初始化
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
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%d ", i);
    }
    free(p);
    p=NULL;
    return 0;
}