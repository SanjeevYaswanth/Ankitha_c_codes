#include <stdio.h>
#include <string.h>

char* find_sub_string(char *src , char *sub)
{
	int len = strlen(src);
	int len1 = strlen(sub);
	int i,j,flag=0;
	for(i=0; i<=len-len1; i++)
	{
		for(j=0; j<len1; j++)
		{
			if(src[i+j] != sub[j])
			{
				break;
			}
		}
		if(j == len1)
		{
			flag =1;
			break;
		}
	}

	if(flag == 0)
	{
		printf("sub string not found\n");
	}
	else
	{
		printf("sub string found: %s\n",sub);
	}


}

void main()
{
	char str[100] = "mirafra technologies hyderabad";
	char find_string[100] = "mirafra";
	find_sub_string(str,find_string);
}
