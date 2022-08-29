#include <iostream>
#include <algorithm>
void printArr(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
template <typename T>
void bubbleSort(T arr[], int count)
{
    bool flag = false;
    for (int i = 0; i < count - 1; i++)
    {
        flag = false;
        for (int j = i + 1; j < count - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]);

                flag = true;
            }
        }
    }
}
int main()
{
    int arr[] = {2, 4, 12, 7, 8, 4};
    int size = sizeof(arr) / sizeof(arr[1]);
    bubbleSort(arr, size);
    printArr(arr, size);
    return 0;
}