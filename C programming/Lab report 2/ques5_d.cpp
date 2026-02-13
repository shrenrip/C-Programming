#include<stdio.h>
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	(num % 2 == 0) ? printf("The number is even\n") : printf("The number is odd\n");
	printf("By: Nripesh Shrestha");
}