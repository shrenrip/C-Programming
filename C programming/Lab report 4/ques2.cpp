#include<stdio.h>
#include<stdlib.h>

//void sort(int n[], int c)
//{
//	int i,j,temp;
//	for(i=0;i<c;i++)
//	{
//		for(j=i+1;j<c;j++)
//		{
//			if(n[j]>n[i])
//			{
//				temp=n[i];
//				n[i]=n[j];
//				n[j]=temp;	
//			}
//		}
//	}
//}

int main()
{
	int num,i=0,p,c=0;
	
	
	printf("Enter any number: ");
	scanf("%d",&num);
//	
//	p=num;
//	
//	while(num != 0)
//	{
//		c++;
//		num /= 10;
//	}
//	
//	num=p;
//	int *n = (int*) malloc(c * sizeof(int));
	
	while(num != 0)
	{
		c = num % 10;
		printf("%d",c);
		num /= 10; 	
	}
	
//	sort(temp, c);
	
//	for(i=0;i<c;i++)
//	{
//		printf("%d\t",n[i]);
//	}
	printf("\nBy: Nripesh Shrestha");
//	free(n);
	return 0;
}