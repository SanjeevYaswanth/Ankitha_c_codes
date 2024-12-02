#include <stdio.h>
#include <string.h>

char* reverse_string(char* src , int n)
{
	int i;
	char temp;
	for(i=0; i<n/2; i++)
	{
		temp = src[i];
		src[i] = src[n-i-1];
		src[n-i-1] = temp;
	}
	return src;
}

void main()
{
	char str[100]="ankitha is a good girl";
	int len = strlen(str);
	char *res = reverse_string(str,len);
	printf("%s\n",res);
}
