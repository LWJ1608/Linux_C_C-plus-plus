/*
 * @Author: lwj
 * @Date: 2022-04-20 10:20:49
 * @Description:malloc函数开辟空间，用free函数释放堆区空间
 */
// malloc开辟的空间放入一个随机值
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[12] = {0};                        //栈区开辟空间
    int *p = (int *)malloc(10 * sizeof(int)); //返回值为void*，需要进行强制类型转换
    if (p == NULL)
    {
        perror("main"); //如果返回空指针，说明空间开辟失败，perror返回错误类型
        return 1
    }
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        p[i] = i;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }
    free(p);  //释放malloc开辟的空间
    p = NULL; //将p置空
    return 0;
}