#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float determinant,root_1,root_2;
	printf("Enter the values of ax^2 + bx + c: ");
	scanf("%d%d%d",&a,&b,&c);
	determinant=sqrt(pow(b,2)-4*a*c);
	root_1=(-b+determinant)/(2*a);
	root_2=(-b-determinant)/(2*a);
	printf("The roots are: %.2f and %.2f \n",root_1,root_2);
	printf("By: Nripesh Shrestha");
	return 0;
}