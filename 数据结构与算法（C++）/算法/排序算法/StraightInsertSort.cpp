/**
 * @Author: lwj
 * @Date: 2022-06-28 20:43:29
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/算法/排序算法/StraightInsertSort.cpp
 * @Description:直接插入排序
 **/

#include <iostream>

template <typename Type>
void print(const Type &arr, int size) //打印数组
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
// template <typename Type>
// void straightInsertSort(Type *arr, int size)
// {
//     int pos, i;
//     Type tmp;
//     for (pos = 1; pos < size; pos++) //控制插入次数
//     {
//         tmp = arr[pos];                                //将要插入的数据放入临时变量中
//         for (i = pos - 1; tmp < arr[i] && i >= 0; i--) //判断数据是否要后移
//         {
//             arr[i + 1] = arr[i]; //数据向后移动
//         }
//         arr[i + 1] = tmp;
//     }
// }
template <typename T>
void straightInsertSort(T arr[], int size)
{
    int j, i;
    T tmp; //存放临时的值
    for (i =)
    {
        }
}
int main()
{
    int arr[] = {3, 5, 2, 7, 7, 6, 99, 66};
    int size = sizeof(arr) / sizeof(arr[1]);
    straightInsertSort(arr, size);
    print(arr, size);
    return 0;
}