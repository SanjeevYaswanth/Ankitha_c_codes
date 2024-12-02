#include <stdio.h>

void main()
{
	char str[]="123456";
	int res=0,element;
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		element = str[i]-48;
		if(element<=9)
		{
			res= res+element;
		}
	}
	printf("%d\n",res);
}
