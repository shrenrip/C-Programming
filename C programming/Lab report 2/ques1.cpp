#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter 3 numbers: ");
	scanf("%d%d%d",&num1,&num2,&num3);
	printf("Forward order: %d %d %d\n",num1,num2,num3);
	printf("Reverse order: %d %d %d\n",num3,num2,num1);
	printf("By: Nripesh Shrestha");
}