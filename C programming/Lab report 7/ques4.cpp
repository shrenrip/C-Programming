#include<stdio.h>

void add(int arr[], int size);
int main()
{
	int arr[]={10,15,20,25,30};
	int size = 5;
	int i;
	printf("The elements of array: ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	add(arr,size);
	printf("By: Nripesh Shrestha");
	return 0;
}

void add(int arr[], int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
	{
		sum +=arr[i];
	}
	printf("\nThe sum is: %d\n",sum);
}