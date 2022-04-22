/*
 * @Author: lwj
 * @Date: 2022-04-17 10:56:27
 * @Description:通讯录
 */
/*
通讯录的基本功能：
1、通讯录能容纳1000个人
2、每个人的信息：名字，年龄，性别，电话，地址
3、通讯录主要功能
    1）增加联系人的信息
    2）删除联系人的信息
    3）修改联系人的信息
    4）查找联系人的信息
    5）排序联系人的信息
*/

#ifndef __CONTACT_H__ //防止重复包含
#define __CONTACT_H__

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NAME 20
#define SEX 3
#define TELE 11
#define ADDR 20
#define MAX 1

typedef struct Person
{
    char c_Name[NAME]; //姓名
    char c_Sex[SEX];   //性别
    char c_Tele[TELE]; //电话
    char c_Addr[ADDR]; //地址
    int c_Age;         //年龄
} Person;

typedef struct Contact
{
    Person *data;   //通讯容量
    int index;      //记录下标
    int maxCapcity; //记录通讯录最大容量
} Contact;

//通过姓名查找联系人
static int FindByName(const Contact *C1, const char name[]);
//初始化通讯录
void initCon(Contact *C1);
//增加联系人
void addPerson(Contact *C1);
//打印联系人信息
void printPerson(const Contact *C1);
//删除联系人的信息
void delPerson(Contact *C1);
//查找指定联系人
void searchPerson(const Contact *C1);
//修改指定联系人
void modPerson(const Contact *C1);
//销毁通讯录
void putNull(Contact *C1);
//释放堆区空间
void pFree(Contact *C1);
//保存通讯录信息到文件
//加载文件内容到通讯录
//检测增容的问题
#endif