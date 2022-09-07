/**
 * @Author: lwj
 * @Date: 2022-08-31 15:45:22
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/算法/排序算法/
 * @Description:
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
void straightInsertSort(Type arr[], int size)
{
    int tmp, j;
    for (int i = 1; i < size; i++)
    {
        tmp = arr[i];
        for (j = i - 1; j >= 0 && tmp < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j] = tmp;
    }
}
int main()
{
    int arr[] = {36, 80, 45, 66, 22, 9, 16, 36};
    int count = sizeof(arr) / sizeof(arr[0]);
    straightInsertSort(arr, count);
    print(arr, count);
    return 0;
}