#include<stdio.h>
int fact(int n);
int per(int n, int r);
int com(int n, int r);
int main()
{
	int n,r;
	printf("Enter n and r: ");
	scanf("%d%d",&n,&r);
	printf("Factorial: %d\n",fact(n));
	printf("Permutaion: %d\n",per(n,r));
	printf("Combination: %d\n",com(n,r));
	printf("By: Nripesh Shrestha");
	return 0;
}

int fact(int n)
{
	if (n == 0 || n == 1){
		return 1;
	}
	return n * fact(n-1);
}

int per(int n, int r)
{
	return fact(n) / fact(n-r);
}

int com(int n, int r)
{
	return fact(n) / (fact(r) * fact(n-r));
}