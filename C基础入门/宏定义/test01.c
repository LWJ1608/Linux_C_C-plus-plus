/*
 * @Author: lwj
 * @Date: 2022-04-30 16:35:15
 * @Description:#define 定义标识符的使用
 */

//#define 使用例子：

// #define MAX 1000
// #define reg register           //为 register这个关键字，创建一个简短的名字
// #define do_forever for (;;)    //用更形象的符号来替换一种实现
// #define CASE break;case        //在写case语句的时候自动把 break写上。

// 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
// #define DEBUG_PRINT printf("file:%s\tline:%d\t \
//                           date:%s\ttime:%s\n",\
//                           __FILE__, \
//                            __LINE__,       \
//                           __DATE__, __TIME__)  
#include <stdio.h>

#define MAX 1000            //用宏定义数值
#define un_int unsigned int //用宏定义简化变量或关键词
#define do_forever for (;;) //用宏定义一个for循环
// #define CASE \
//     break;   \
//     case //也可自己根据需要定义特殊用法
#define DEBUG_PRINT printf(" file:%s\n line:%d\n date:%s\n time:%s\n", \
                           __FILE__, __LINE__, __DATE__, __TIME__)
#define SQUARE(x) x *x

int main()
{
    printf("用法一:\n");
    int a = MAX;
    printf("MAX = %d\n", a);

    printf("用法二:\n");
    un_int b = 10;
    printf("un_int == unsigned int \n");

    printf("用法三:\n");
    // do_forever; //用宏定义一个for循环

    printf("用法四:\n");
    DEBUG_PRINT;

    printf("用法五:\n");
    //两个结果不一样
    printf("%d\n", SQUARE(3));     // 3*3
    printf("%d\n", SQUARE(2 + 1)); // 2+1*2+1

    return 0;
}