/*
 * @Author: lwj
 * @Date: 2022-04-17 10:57:02
 * @Description:通讯录
 */

#include "contact.h"

//初始化通讯录
void init_con(Contact *C1)
{
    // memset(C1, 0, sizeof(C1->data));
    C1->data = (Person *)calloc(MAX, sizeof(Person)); //为通讯录开辟空间，并初始化
    C1->index = 0;                                    //记录添加人数个数
    C1->maxCapcity = MAX;                             //记录通讯录最大容量
}
//增加联系人
void addPerson(Contact *C1)
{
    if (C1->index == MAX)
    {
        //当容量满时，进行扩容
        Person *tmp = (Person *)realloc(C1->data, 2 * MAX * sizeof(Person));
        if (tmp == NULL)
        {
            perror("addPerson");
            printf("联系人添加失败！\n");
            return;
        }
        C1->data = tmp;
        tmp = NULL;
        C1->maxCapcity = 2 * MAX;
    }
    printf("请输入联系人姓名>");
    scanf("%s", C1->data[C1->index].c_Name);
    printf("请输入联系人年龄>");
    scanf("%d", &(C1->data[C1->index].c_Age));
    printf("请输入联系人性别>");
    scanf("%s", C1->data[C1->index].c_Sex);
    printf("请输入联系人电话>");
    scanf("%s", C1->data[C1->index].c_Tele);
    printf("请输入联系人地址>");
    scanf("%s", C1->data[C1->index].c_Addr);
    C1->index++;
    printf("添加成功！\n");
}
//打印联系人信息
void printPerson(const Contact *C1)
{
    if (C1->index == 0)
    {
        printf("通讯录为空！\n");
        return;
    }
    printf("\t\t\t通讯录中共有%d个联系人\n", C1->index);
    printf("%s\t\t %s\t\t %s\t\t %s\t\t %s\t\t\n", "姓名", "年龄", "性别", "电话", "地址");
    int i = 0;
    for (i = 0; i < C1->index; i++)
    {
        printf("%s\t\t %d\t\t %s\t\t %s\t\t %s\t\t\n",
               C1->data[i].c_Name,
               C1->data[i].c_Age,
               C1->data[i].c_Sex,
               C1->data[i].c_Tele,
               C1->data[i].c_Addr);
    }
}

//通过姓名查找联系人
static int FindByName(const Contact *C1, const char name[])
{
    int num = 0;
    for (num = 0; num < C1->index; num++)
    {
        if (strcmp(name, C1->data[num].c_Name) == 0)
        {
            return num;
        }
    }
    return -1;
}

//查找指定联系人
inline void searchPerson(const Contact *C1)
{
    if (C1->index == 0)
    {
        printf("通讯录位空！\n");
        return;
    }
    char name[NAME] = {0};
    printf("输入你要查找的联系人姓名:>");
    scanf("%s", name);
    int pot = FindByName(C1, name);
    if (pot != -1)
    {
        printf("%s\t\t %s\t\t %s\t\t %s\t\t %s\t\t\n", "姓名", "年龄", "性别", "电话", "地址");
        printf("%s\t\t %d\t\t %s\t\t %s\t\t %s\t\t\n",
               C1->data[pot].c_Name,
               C1->data[pot].c_Age,
               C1->data[pot].c_Sex,
               C1->data[pot].c_Tele,
               C1->data[pot].c_Addr);
    }
    else
    {
        printf("不存在您输入的联系人\n");
        return;
    }
}
//删除联系人的信息
void delPerson(Contact *C1)
{
    if (C1->index == 0)
    {
        printf("通讯录位空！\n");
        return;
    }
    char name[NAME] = {0};
    printf("输入你要删除的联系人姓名:>");
    scanf("%s", name);
    int pot = FindByName(C1, name);
    if (pot == -1)
    {
        printf("不存在您输入的联系人\n");
        return;
    }
    int i = pot;
    for (i = pot; i < C1->index - 1; i++)
    {
        C1->data[i] = C1->data[i + 1];
    }
    C1->index--;
    printf("删除成功！");
}
//修改指定联系人
void modPerson(const Contact *C1)
{
    if (C1->index == 0)
    {
        printf("通讯录位空！\n");
        return;
    }
    char name[NAME] = {0};
    printf("输入你要修改的联系人姓名:>");
    scanf("%s", name);
    int pot = FindByName(C1, name);
    if (pot == -1)
    {
        printf("不存在您输入的联系人\n");
        return;
    }
    printf("请输入联系人姓名>");
    scanf("%s", C1->data[pot].c_Name);
    printf("请输入联系人年龄>");
    scanf("%d", &(C1->data[pot].c_Age));
    printf("请输入联系人性别>");
    scanf("%s", C1->data[pot].c_Sex);
    printf("请输入联系人电话>");
    scanf("%s", C1->data[pot].c_Tele);
    printf("请输入联系人地址>");
    scanf("%s", C1->data[pot].c_Addr);
    printf("修改成功！\n");
}
//销毁通讯录
void putNull(Contact *C1)
{
    C1->index = 0;
    printf("清空通讯录成功！\n");
}

//保存通讯录信息到文件
void saveFile(Contact *C1)
{
    FILE *pf = fopen("phoneBook.txt", "w");
    if (pf == NULL) //判断文件是否打开成功
    {
        perror("fopen");
        return;
    }
    int i = 0;
    for (i = 0; i < C1->index - 1; i++)
    {
        fputs("C1->data[i].c_Name:", pf);
        fputs("C1->data[i].c_Age ", pf);
        fputs("C1->data[i].c_Sex ", pf);
        fputs("C1->data[i].c_Tele ", pf);
        fputs("C1->data[i].c_Addr\n", pf);
    }
    fclose(pf); //关闭文件
    pf = NULL;
}
//加载文件内容到通讯录
//释放堆区空间
void pFree(Contact *C1)
{
    free(C1->data);
    C1->data = NULL;
    C1->index = 0;
    C1->maxCapcity = 0;
}
//检测增容的问题