/**
 * @Author: lwj
 * @Date: 2022-08-30 10:23:25
 * @FilePath: /Linux_C_C-plus-plus/test01/quickSort.cpp
 * @Description:实现快速排序算法
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
template <typename T>
int parition(T arr[], int low, int high)
{
    T tmp = arr[low]; //保存中心轴
    while (low != high)
    {
        while (low < high && arr[high] >= tmp)
        {
            high--;
        }
        if (low < high)
        {
            arr[low] = arr[high];
            low++;
        }
        while (low < high && arr[low] <= tmp)
        {
            low++;
        }
        if (low < high)
        {
            arr[high] = arr[low];
            high--;
        }
    }
    arr[low] = tmp;
    return low; //返回中心轴位置
}
template <typename T>
void quickSort(T arr[], int low, int high)
{
    int tmp;
    if (low >= high)
    {
        return;
    }
    tmp = parition(arr, low, high);
    parition(arr, low, tmp - 1);
    parition(arr, tmp + 1, high);
}
template <typename T>
void quickSort(T arr[], int count)
{
    quickSort(arr, 0, count - 1);
}
int main()
{
    int arr1[] = {3, 5, 2, 6, 1, 3, 0};
    int count = sizeof(arr1) / sizeof(arr1[0]);

    printArr(arr1, count);
    quickSort(arr1, count);
    printArr(arr1, count);

    return 0;
}