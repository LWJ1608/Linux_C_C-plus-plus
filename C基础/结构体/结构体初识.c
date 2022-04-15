/*
 * @Author: lwj
 * @Date: 2022-03-26 15:32:47
 * @LastEditTime: 2022-03-26 16:22:48
 * @Description:结构体简单定义
 * @FilePath: /C学习/结构体/结构体初识.c
 */

#include <stdio.h>

struct Stu
{
    char name[20]; //姓名
    int age;       //年龄
    char id[10];   //学号

} s; //初始化了一个Stu类型的s变量，s是全局变量

inline void printStu(const struct Stu *p)
{
    printf("学生姓名：%s \n", p->name);
    printf("学生年龄：%d \n", p->age);
    printf("学生学号：%s \n", p->id);
}

int main()
{
    struct Stu s1;                          //创建一个Stu类型的变量s1
    struct Stu s2 = {"lwj", 18, "0192939"}; //创建一个Stu类型的变量s1,并给它赋值
    printStu(&s2);
    return 0;
}