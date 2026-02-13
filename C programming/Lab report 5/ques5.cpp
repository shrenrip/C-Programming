#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=5;i++)
	{
		printf("%d\t",i);
		k=i;
		for(j=5;j>i;j--)
		{
			printf("%d\t",k+=j);
		}
		printf("\n");
	}
	printf("\n");
	printf("By: Nripesh Shrestha");
	return 0;
}