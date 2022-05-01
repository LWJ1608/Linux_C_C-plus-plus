/*
 * @Author: lwj
 * @Date: 2022-05-01 13:43:29
 * @Description:#和##在宏定义中的用法
 */

//#在宏中可以防止参数被替换
//##可以连接两个符号串 如：adfasf和1202
#include <stdio.h>

#define PRINT(X, FORMAT) printf("the number " #X " is " FORMAT "\n", X)
#define CAT(X, Y) X##Y

int main()
{
    printf("-------#用法--------\n");
    int a = 10;
    PRINT(a, "% d");

    float b = 10.0f;
    PRINT(b, "%f");

    printf("--------##用法--------\n");
    int class1608 = 100;

    printf("%d\n", CAT(class, 1608));
    printf("%d\n", class1608);
    return 0;
}