/*
 * @Author: lwj
 * @Date: 2022-04-03 02:06:54
 * @LastEditTime: 2022-04-06 09:51:41
 * @Description:二级指针传参
 * @FilePath: /C初级学习/比特习题/test_06.c
 */

inline void print(int **k)
{
    int
}
int main()
{
    int a = 8;
    int *p = &a;
    int **b = &p;
    int *arr[4] = {2};

    print(b);   //可传入二级指针
    print(&p);  //可传入一级指针地址
    print(arr); //可传入一级数组地址
    return 0;
}