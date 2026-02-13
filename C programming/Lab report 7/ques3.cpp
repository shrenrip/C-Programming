#include<stdio.h>
int main()
{
	int arr1[3][2];
	int arr2[3][2];
	int sum[3][2];
	int i,j;
	
	printf("Enter elements of first matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter elements of second matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	printf("Resultant matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	printf("By: Nripesh Shrestha");
}