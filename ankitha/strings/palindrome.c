#include <stdio.h>
#include <string.h>

char* palindrome(char *src)
{
	int i,flag =0;
	int len = strlen(src);
	for(i=0; src[i]!='\0'; i++)
	{
		if(src[i] != src[len -1])
		{
			flag =1;
		}
	}
	if(flag == 0)
	{
		printf("%s is not palindrome\n",src);
	}
	else
	{
		printf("%s is palindrome\n",src);
	}
}

void main()
{
	char str[100]="madam";
	palindrome(str);
}
