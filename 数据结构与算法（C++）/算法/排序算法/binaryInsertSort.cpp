/**
 * @Author: lwj
 * @Date: 2022-08-31 15:45:22
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/算法/排序算法/binaryInsertSort.cpp
 * @Description:折半插入排序
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
void binaryInsertSort(Type arr[], int size)
{
    int pos, j, low, high;
    Type tmp;
    for (pos = 1; pos < size; pos++)
    {
        tmp = arr[pos], low = 0, high = size - 1;
        while (low <= high)
        {
                }
    }
}
int main()
{
    int arr[] = {4, 2, 5, 88, 4, 1, 88, 5};
    int count = sizeof(arr) / sizeof(arr[0]);
    binaryInsertSort(arr, count);
    print(arr, count);
    return 0;
}