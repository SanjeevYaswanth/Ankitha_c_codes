#include <stdio.h>

void string_concat(char *dst,char *str)
{
	int i,j;
	for(i=0;dst[i]!='\0';i++);
	{
		for(j=0;str[j]!='\0';j++,i++)
		{
			dst[i]=str[j];
		}
		dst[i]='\0';
	}
	printf("%s\n",dst);
}





void main()
{
	char str1[20]="ankitha";
	char str2[40]="ammu";
	string_concat(str1,str2);
}
