/**
 * @Author: lwj
 * @Date: 2022-06-28 20:43:29
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/算法/排序算法/StraightInsertSort.cpp
 * @Description:直接插入排序
 **/

#include <iostream>
template <typename Type>
void straightInsertSort(Type *arr, int size)
{
    int pos, i;
    Type tmp;
    for (pos = 1; pos < size; pos++) //
    {
        tmp = arr[pos]; //将要出入的 数据放入临时变量中
        for (i = pos - 1; tmp < arr[i] && i < ; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[i] = tmp;
    }
}
int main()
{
    int arr[] = {3, 5, 2, 7, 7, 6, 99, 66};
    return 0;
}