#include<stdio.h>
int main()
{
	int a,b,i,s=0;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	for(i=a;i<b;i++)
	{
		if(i%2==0)
		{
			s +=i;
		}
	}
	printf("The sum of even numbers between %d and %d is %d\n",a,b,s);
	printf("By: Nripesh Shrestha");
}