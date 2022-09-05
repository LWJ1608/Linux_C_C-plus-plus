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
    int pos, j, low, high, mid;
    Type tmp;
    for (pos = 1; pos < size; pos++)
    {
        tmp = arr[pos], low = 0, high = pos - 1;
        while (low <= high)
        {
            mid = (low + high) / 2; //求有序序列的中间值，
            if (tmp < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        for (j = pos - 1; j >= low; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[low] = tmp;
    }
}
int main()
{
    int arr[] = {36, 80, 45, 66, 22, 9, 16, 36};
    int count = sizeof(arr) / sizeof(arr[0]);
    binaryInsertSort(arr, count);
    print(arr, count);
    return 0;
}