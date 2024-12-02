#include <stdio.h>
#include <string.h>

int str_len(char *src)
{
	int i,count=0;
	for(i=0; src[i]!='\0'; i++)
	{
		count++;
	}
	return count;
}

void main()
{
	char str[100]= "mirafra.com";
	int len;
	len = str_len(str);
	printf("%d is the length of string\n",len);
}
