/*
 * @Author: lwj
 * @Date: 2022-04-06 21:05:05
 * @LastEditTime: 2022-04-08 20:36:37
 * @Description:库函数qsort（快速排序），回调函数的简单运用
 * @FilePath: /C初级学习/指针/test.c
 */

/*
void qsort(void* base,//base中存放的代排数据的首地址
                        size_t num,//代排数据个数
                        size_t size,//代排数据元素的大小，单位字节
                        int (*compar)(const void*,const void*)//是用来比较代排数据中的两个元素的数据的函数
                        );
*/

#include <stdio.h>
#include <stdlib.h>

struct Stu
{
    char name[20];
    int age;
};

void print_arr(const int *arrA, int count)
{
    int i = 0;
    for (i = 0; i < count; i++)
    {
        printf("%d ", arrA[i]);
    }
    printf("\n");
}

int compare_s1(const void *s1, const void *s2) //比较stu结构体中的年龄
{
    return ((struct Stu *)s1)->age - ((struct Stu *)s2)->age;
}

int compare_s2(const void *s3, const void *s4)
{
    return strcmp(((struct Stu *)s3)->name, ((struct Stu *)s4)->name);
}

int compare_arr(const void *a1, const void *a2) //数组中两个元素比较
{
    return *(int *)a2 - *(int *)a1;
}

void test01() //整数排序
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int count = sizeof(arr) / sizeof(arr[0]);
    compare_arr(&arr[1], &arr[0]);
    qsort(arr, count, sizeof(arr[0]), compare_arr);
    print_arr(arr, count);
}

void test02() //自定义学生结构体类型
{
    struct Stu stu1[] = {{"asfa", 12}, {"fas", 35}, {"dsfasdf", 34}};
    qsort(stu1, 3, sizeof(stu1[0]), compare_s1);
    qsort(stu1, 3, sizeof(stu1[0]), compare_s2);
}

int main()
{
    test01();
    test02();

    return 0;
}