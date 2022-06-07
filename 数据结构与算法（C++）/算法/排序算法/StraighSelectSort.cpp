#include<iostream>
#include<algorithm>

template<typename Type>
void print(Type arr[],int size)
{
	for(int i = 0;i < size;i++)
	{
		std::cout<<arr[i]<<" ";
	}
		std::cout<<std::endl;
}
template<typename Type>
void straighSelectSort(Type arr[],int size)
{
	Type min;
	for(int i = 0;i < size - 1;i++)
	{
		for(int j = i+1;j < size - 1;j++)
		{
			min = i;
			if(arr[i] > arr[j])
			{
				min = j;
			}
		}
		swap(arr[i],arr[min]);
	}
	
}
int main()
{
	int arr[] = {1,7,5,2,3,88,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	StraighSelectSort(arr,size);
	print(arr,size);
	return 0;
}
