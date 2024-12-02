#include <stdio.h>
#include <string.h>

char* str_cpy(char *str , char *dstn)
{
	int i;
	for(i=0; str[i]!='\0'; i++)
	{
		dstn[i] = str[i];
	}
	dstn[i]='\0';
	return dstn;
}

void main()
{
	char src[100] = "mirafra.com";
	char dst[100];
	char *res;
	res = str_cpy(src,dst);
	printf("%s is a destination\n",res);
}

