#include<iostream>
tempalate<typename Type>
void print(Type arr[],int size)
{
	for(int i = 0;i < size;i++)
	{
		std::cout<<arr[i]<<" ";
	}
		std::cout<<std::endl;
｝
tempalate<typename Type>
void straighSelectSort(Type arr[],int size)
{
	
	
}
int main()
{
	int arr[] = {1,7,5,2,3,88,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	//StraighSelectSort(arr,size);
	print(arr,size);
	return 0;
}
