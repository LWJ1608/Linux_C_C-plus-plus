/**
 * @Author: lwj
 * @Date: 2022-08-30 10:23:25
 * @FilePath: /Linux_C_C-plus-plus/test01/quickSort.cpp
 * @Description:实现快速排序算法
 **/

#include <iostream>

void printArr(int *arr, const int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
template <typename T>
int parition(T arr[], int low, int heigh)
{
    T tmp = arr[low]; //保存中心轴
    while (low != heigh)
    {
        while (low != heigh && arr[heigh] >= tmp)
        {
            heigh--;
        }
        if (low != heigh)
        {
            arr[low] = arr[heigh];
            low++;
        }
        while (low != heigh && arr[low] <= tmp)
        {
            low++;
        }
        if (low != heigh)
        {
            arr[heigh] = arr[low];
            heigh--;
        }
    }
    arr[low] = tmp;
    return low; //返回中心轴位置
}
template <typename T>
void quickSort(T arr[], int low, int heigh)
{
    int tmp = parition(arr, low, heigh);
    if (low >= heigh)
    {
        return;
    }
    parition(arr, 0, tmp);
    parition(arr, tmp + 1, );
}
template <typename T>
void quickSort(T arr[], int count)
{
    quickSort(arr, 0, count - 1);
}
int main()
{
    int arr1[] = {3, 5, 2, 6, 1, 3, 0};
    int count = sizeof(arr1) / sizeof(arr1[1]);

    printArr(arr1, count);
    quickSort(arr1, count);
    printArr(arr1, count);

    return 0;
}