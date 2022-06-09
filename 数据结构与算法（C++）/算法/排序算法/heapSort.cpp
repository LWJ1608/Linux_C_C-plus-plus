/**
 * @Author: lwj
 * @Date: 2022-06-08 13:26:44
 * @Description:堆排序
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/算法/排序算法/heapSort.cpp
 **/
#include <iostream>
#include <algorithm>

template <typename Type>
void print(const Type *arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
template <typename Type>
void siftDown(Type arr[], int pos, int size)
{
    int child;           //
    Type tmp = arr[pos]; //暂存根记录
    for (; pos * 2 - 1 < size; pos = child)
    {
        child = pos * 2 - 1;                                  // pos结点的左孩子
        if (child != size - 1 && arr[child + 1] > arr[child]) //选取两个孩子的大者
        {
        }
    }
}
template <typename Type>
void heapSort(Type arr[], int size)
{
    for (int i = size / 2 - 1; i < count; i++)
    {
    }
}
int main()
{
    int arr[] = {1, 7, 5, 2, 3, 88, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    print(arr, size);
    return 0;
}