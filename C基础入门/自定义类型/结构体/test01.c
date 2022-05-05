/*
 * @Author: lwj
 * @Date: 2022-04-15 14:15:48
 * @Description:
 */
#include <stdio.h>

typedef struct Node
{
    char s2;
    int i;
    char s1;

} Node;

int main()
{
    Node n = {0};
    short n1 = 9;
    printf("%d\n", sizeof(n1));
    return 0;
}
