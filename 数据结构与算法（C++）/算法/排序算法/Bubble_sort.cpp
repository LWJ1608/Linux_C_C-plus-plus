/**
 * @Author: lwj
 * @Date: 2022-06-04 20:27:33
 * @Description:冒泡排序
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/算法/排序算法/Bubble_sort.cpp
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
void bubbleSort(Type *arr, int size) //冒泡排序
{
    bool flag;
    for (int i = 0; i < size - 1; i++)
    {
        flag = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]); //调用STL交换函数,升序话把两个数交换
                flag = true;
            }
        }
    }
}
int main()
{
    int arr[] = {4, 2, 5, 88, 4, 1, 88, 5};
    int count = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, count);
    print(arr, count);
    return 0;
}