/*
 * @Author: lwj
 * @Date: 2022-03-23 15:31:33
 * @LastEditTime: 2022-03-23 15:41:29
 * @Description:宏定义的简单使用
 * @FilePath: /Linux_CC++/C学习/宏定义/宏定义.c
 */

#include <stdio.h>

#define URL "http://www.baidu.com"
#define NAME "百度"

int main()
{
    printf("搜索引擎,%s,%s\n", URL, NAME);
    return 0;
}