#include<stdio.h>
int main()
{
	int a=0,b=1,c;
	printf("%d\t",a);
	printf("%d\t",b);
	c=a+b;
	while(c <=300)
	{
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
	}
	printf("\nBy: Nripesh Shrestha");
}