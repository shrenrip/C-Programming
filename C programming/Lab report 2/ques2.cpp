#include<stdio.h>
int main()
{
	int num,temp;
	printf("Enter your number: ");
	scanf("%d",&num);
	temp=num;
	num++;
	printf("After increment: %d\n",num);
	num--;
	printf("Again after decrement of incremented value: %d\n",num);
	printf("By: Nripesh Shrestha");
}