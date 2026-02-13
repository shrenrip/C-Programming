#include<stdio.h>
int add(int n);
int main()
{
	int sum;
	sum=add(50);
	printf("%d\n",sum);
	printf("By: Nripesh Shrestha");
}

int add(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return n + add(n-1);
}