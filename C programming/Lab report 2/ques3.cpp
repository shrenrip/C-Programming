#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,SI,CI,amount;
	printf("Enter principle, time and rate: ");
	scanf("%f%f%f",&p,&t,&r);
	SI=(p*t*r)/100;
	amount=p*pow(1+r/100,t);
	CI=amount-p;
	printf("The simple interest is:   %f\n",SI);
	printf("The compound interest is: %f\n",CI);
	printf("By: Nripesh Shrestha");
}