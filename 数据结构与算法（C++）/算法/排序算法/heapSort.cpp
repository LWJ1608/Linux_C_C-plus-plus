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
    for (; pos * 2 + 1 < size; pos = child)
    {
        child = pos * 2 + 1;                                  // pos结点的左孩子
        if (child != size - 1 && arr[child + 1] > arr[child]) //选取两个孩子的大者
        {
            child++; //如果大于的话，选较大的那个，
        }
        if (arr[child] > tmp) //如果子孩子比父亲大，
        {
            arr[pos] = arr[child];
        }
        else
        {
            break;
        }
    }
    arr[pos] = tmp;
}
template <typename Type>
void heapSort(Type arr[], int size)
{
    int i;
    for (i = size / 2 - 1; i >= 0; i--)
    {
        siftDown(arr, i, size);
    }
    for (i = size - 1; i > 0; i--)
    {
        std::swap(arr[0], arr[i]);
        siftDown(arr, 0, i);
    }
}
int main()
{
    int arr[] = {1, 7, 5, 2, 3, 88, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    heapSort(arr, size);
    print(arr, size);
    return 0;
}