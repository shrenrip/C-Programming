#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	if((num/2) * 2 == num)
		printf("The number is even\n");
	else
		printf("The number is odd\n");
	printf("By: Nripesh Shrestha");
}