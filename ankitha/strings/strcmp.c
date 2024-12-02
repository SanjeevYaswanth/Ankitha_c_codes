#include <stdio.h>
#include <string.h>

void main()
{
	char str1[100]="mirafra.com";
	char str2[100]="mirafra.com";
	int i,j;
	int flag =0;
	for(i=0;str1[i]!='\0';i++)
	{
		for(j=0;str2[j]!='\0';j++)
		{
			if(str1[i] == str2[j])
			{
				flag =1;		
				break;
			}
		}
	}
	if(flag == 0)
	{
		printf("2 strings are same\n");
	}
	else
	{
		printf("2 strings are not same\n");
	}


}
