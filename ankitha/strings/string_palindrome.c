#include <stdio.h>
#include <string.h>

void main()
{
	char str[100];
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	int i;
	int flag = 0;
	int len = strlen(str);
	for(i=0; i < len/2; i++)
	{
		if(str[i] != str[len - i -1])
		{
			flag = 1;
			break;
		}
	}

	if(flag == 0)
	{
		printf("String is palindrome: %s\n",str);
	}
	else
	{
		printf("String is not palindrome\n");
	}
}
