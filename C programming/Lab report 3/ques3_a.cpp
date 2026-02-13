#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	char name[50];
// 	getch
	printf("Enter your character(using getch): ");
	c=getch();
	printf("\nYour input: %c\n",c);	
//	getche
	printf("Enter your character(using getche): ");
	c=getche();
	printf("\nYour input: %c\n",c);
//	getchar
	printf("Enter your character(using getchar): ");
	c=getchar();
	printf("Your input: %c\n",c);
//	scanf
	printf("Enter your name(using scanf): ");
	scanf("%s",name);
	printf("Hello, %s\n",name);
	getchar();
//	gets
	printf("Enter your name(using gets): ");
	gets(name);
	printf("Hello, %s\n",name);
//	printf
	printf("Hello World!(using printf so need to manually add newline '\\n')\n");
//	puts
	puts("Hello World!(using puts so automatically adds newline '\\n')");
	printf("By: Nripesh Shrestha");
}