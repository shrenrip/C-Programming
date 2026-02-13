#include<stdio.h>
int main()
{
	int arr1[3][3]={1,2,3,4,5,6,7,8,9};
	int arr2[3][3]={9,8,7,6,5,4,3,2,1};
	int mul[3][3];
	int i,j,k;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j] = 0;
		}
	}
	printf("The elements of first matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("The elements of second matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				mul[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
	printf("Result of 3x3 matrix multiplication is: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	printf("By: Nripesh Shrestha");
	return 0;
}