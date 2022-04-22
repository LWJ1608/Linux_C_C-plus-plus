/*
 * @Author: lwj
 * @Date: 2022-04-17 10:57:10
 * @Description:测试通讯录功能
 */

#include "contact.h"
#include <stdlib.h>
void menu()
{
    printf("************************************************\n");
    printf("***********      欢迎使用通讯录       ************\n");
    printf("************************************************\n");
    printf("************************************************\n");
    printf("********   1、添加联系人   2、删除联系人    ********\n");
    printf("********   3、修改联系人   4、查找联系人    ********\n");
    printf("********   5、排序联系人   6、显示电话个数   ********\n");
    printf("********   7、清空联系人   8、显示全部联系人 ********\n");
    printf("********         0、退出通讯录            ********\n");
    printf("************************************************\n");
    printf("************************************************\n");
}
enum Input
{
    EXIT = 0,
    ADD,
    DEL,
    MOD,
    FIND,
    SORT,
    NUM_SIZE,
    CLEAR,
    SHOW_ALL
};
int main()
{
    Contact con;
    init_con(&con);

    int input; //输入选择
    do
    {
        menu();
        printf("请输入选择>");
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            addPerson(&con);
            break;
        case DEL:
            delPerson(&con);
            break;
        case MOD:
            break;
        case FIND:
            searchPerson(&con);
            break;
        case SORT:
            break;
        case NUM_SIZE:
            break;
        case CLEAR:
            putNull(&con);
            break;
        case SHOW_ALL:
            printPerson(&con);
            break;
        case EXIT:
            pFree(&con);
            break;
        default:
            printf("输入错误！\n\n");
            break;
        }
    } while (input);

    return 0;
}