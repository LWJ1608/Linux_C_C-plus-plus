/*
 * @Author: lwj
 * @Date: 2022-04-06 10:42:30
 * @LastEditTime: 2022-04-06 18:36:37
 * @Description:函数指针的用法
 * @FilePath: /C初级学习/指针/函数指针.c
 */

int print(int a)
{
    return a;
}

void print01(int a)
{
    printf("%d\n", a);
}

int main()
{
    int a = 8;
    int arr[4] = {0};
    int (*p)(int) = print;
    void (*ps)(int) = print01;
    printf("%d\n", print); //函数名和取函数地址是一样的，而数组名和取数组地址不一样
    printf("%p\n", &print);
    printf("%p\n", p);

    printf("%p\n", ps);
    return 0;
}
