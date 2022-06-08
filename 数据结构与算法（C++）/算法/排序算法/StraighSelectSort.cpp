/**
 * @Author: lwj
 * @Date: 2022-06-08 13:30:33
 * @Description:
 * @FilePath: /Linux_C_C-plus-plus/数据结构与算法（C++）/算法/排序算法/StraighSelectSort.cpp
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
void straighSelectSort(Type *arr, const int size)
{
	Type min;
	for (int i = 0; i < size - 1; i++)
	{
		min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				min = j;
			}
		}
		if (min != i)
			std::swap(arr[i], arr[min]);
	}
}
int main()
{
	int arr[] = {1, 7, 5, 2, 3, 88, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	straighSelectSort(arr, size);
	print(arr, size);
	return 0;
}
