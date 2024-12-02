#include <stdio.h>
#include <string.h>

void main()
{
	char str[]="ankitha ankitha ankitha anki";
	char sub[]="anki";
	int i,j,count=0;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=0;sub[j]!='\0';j++)
		{
			if(str[i+j] != sub[j])
			{
				break;
			}
		}
		if(sub[j]=='\0')
		{
			count++;
			i++;
			j=j-1;
		}
	}
	printf("%d\n",count);


}
