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
void parition(T arr[], int low, int heigh)
{
    T tmp = arr[low]; //保存中心轴
    while (low != heigh)
    {
        if (arr[heigh] < tmp)
        {
            arr[low] = arr[heigh];
            heigh--;
        }
        while (arr[low])
        {
        }
    }
}
void quickSort()
{
}
int main()
{
    int arr1[] = {3, 5, 2, 6, 1, 3, 0};
    int count = sizeof(arr1) / sizeof(arr1[1]);

    printArr(arr1, count);
    return 0;
}