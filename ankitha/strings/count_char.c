#include <stdio.h>
#include <string.h>

void main()
{
	char str[]="ankitha";
	int len =strlen(str);
	int i,j,count=0;
	for(i=0;i<len;i++)
	{
		count=1;
		for(j=i+1;j<len;j++)
		{
			if(str[i] == str[j])
			{
				count++;
				str[j]='\0';
		
			}
		}
		printf("%c %d\n",str[i],count);
	}
}
