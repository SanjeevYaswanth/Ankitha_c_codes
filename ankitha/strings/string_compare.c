#include <stdio.h>
#include <string.h>

char str_cmp(char *str, char *str1)
{
	int l1 = strlen(str);
	int l2 = strlen(str1);
	int i,flag=0;
	if(l1 > l2)
	{
		return 0;
	}
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] != str1[i])
		{
			flag =1;
			
			break;
		}
	}
	if(flag == 0)
	{
		printf("string is not same\n");
	}
	else
	{
		printf("String is same\n");
	}


}

void main()
{
	char str[]="ankitha";
	char str1[]="ankithaaa";
	str_cmp(str,str1);
}
