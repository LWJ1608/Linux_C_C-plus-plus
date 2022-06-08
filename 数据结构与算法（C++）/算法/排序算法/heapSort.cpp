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
void straighSelectSort(Type *arr, constint size)
{

}
int main()
{
    int arr[] = {1, 7, 5, 2, 3, 88, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    print(arr, size);
    return 0;
}