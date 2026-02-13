#include<stdio.h>
int main()
{
	char str[30];
	int i, length = 0, isPalindrome=1;
	
	printf("Enter any string: ");
	scanf("%s",str);
	
	while(str[length]!='\0')
	{
		length++;	
	} 
	for(i=0;i<length;i++)
	{
		if(str[i]!=str[length -1 -i])
		{
			isPalindrome=0;
			break;
		}
	}
	if(isPalindrome == 1)
	{
		printf("The string is palindrome.\n");
	}
	else
	{
		printf("The string is not palindrome.\n");
	}
	printf("By: Nripesh Shrestha");
	return 0;
}