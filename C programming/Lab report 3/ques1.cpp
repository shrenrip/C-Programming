#include<stdio.h>
int main()
{
	int x=6,y=3;
    printf("\tx\t\ty\t\texpressions\tresults\n");
    printf("\t%d\t|\t%d\t|\tx=y+3\t|\tx=%d\n",x,y,y+3);
    printf("\t%d\t|\t%d\t|\tx=y-2\t|\tx=%d\n",x,y,y-2);
    printf("\t%d\t|\t%d\t|\tx=y*5\t|\tx=%d\n",x,y,y*5);
    printf("\t%d\t|\t%d\t|\tx=x/y\t|\tx=%d\n",x,y,(x/y));
    printf("\t%d\t|\t%d\t|\tx=x%%y\t|\tx=%d\n",x,y,x % y);
	printf("By: Nripesh Shrestha");
}