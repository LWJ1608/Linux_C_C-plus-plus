/**
 * @Author: lwj
 * @Date: 2022-06-04 21:52:25
 * @Description:快速排序
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/算法/排序算法/Quick_sort.cpp
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
//一趟快速排序
template <typename Type>
void partition(Type *arr, int low, int high) //快速排序
{
    Type tmp = arr[0]; //
    while (low != high)
    {
        while (low < high && tmp <= arr[high]) //先从右边开始移动
        {
            high--;
        }
        if (low < high) //如果还没相等，数值移动
        {
            arr[low] = arr[high];
        }
        while (low < high && tmp >= arr[low]) //在右边移动一个，轮到左边移动一个
        {
            low++;
        }
        if (low < high)
        {
            arr[high] = arr[low];
        }
    }
    arr[low] = tmp;
}
//递归快速排序
template <typename Type>
int quickSort(Type *arr, int low, int high)
{
    int
}
//快速排序的接口
template <typename Type>
void quickSort(Type *arr, int size)
{
}
int main()
{
    int arr[] = {4, 2, 5, 88, 4, 1, 88, 5};
    int count = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, count);
    print(arr, count);
    return 0;
}
