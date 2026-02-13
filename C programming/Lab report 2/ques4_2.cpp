#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:  ");
	scanf("%d%d",&a,&b);
	printf("Before swapping a:%d b:%d\n",a,b);
	b=a+b;
	a=b-a;
	b=b-a;
	printf("After swapping a:%d b:%d\n",a,b);
	printf("By: Nripesh Shrestha");
}