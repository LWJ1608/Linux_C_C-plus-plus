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

template <typename Type>
void quickSort(Type *arr, int size) //冒泡排序
{
}
int main()
{
    int arr[] = {4, 2, 5, 88, 4, 1, 88, 5};
    int count = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, count);
    print(arr, count);
    return 0;
}