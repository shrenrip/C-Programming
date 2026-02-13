#include<stdio.h>
int main()
{
	int i;
	int arr[5];
	for(i=0;i<5;i++)
	{
		printf("Enter value for index %d: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("At index %d: %d\n",i,arr[i]);
	}
	printf("\nBy: Nripesh Shrestha");
}