#include<stdio.h>

int sort(int num[]);
int even_or_odd(int l, int s);

int main()
{
	int i,j,largest,smallest,temp;
	int num[3];
	printf("Enter three numbers: ");
	for(i=0;i<3;i++)
	{
		scanf("%d",&num[i]);	
	}
	sort(num);
	largest=num[2];
	smallest=num[0];	
	even_or_odd(largest,smallest);
	return 0;
}

int sort(int num[])
{
	int i,j,temp;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	return 0;
}

int even_or_odd(int l, int s)
{
	if(l%2==0)
	{
		printf("Largest number is %d and is even\n",l);
	}
	else
	{
		printf("Largest number is %d and is odd\n",l);
	}
	if(s%2==0)
	{
		printf("Smallest number is %d and is even\n",s);
	}
	else
	{
		printf("Smallest number is %d and is odd\n",s);
	}
	printf("By: Nripesh Shrestha");
	return 0;
}