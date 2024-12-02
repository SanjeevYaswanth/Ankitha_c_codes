#include <stdio.h>
#include <string.h>


void sep_word(char *str, int len)
{
	int i,j;
	char temp[50];
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i] == ' ')
		{
			temp[i] = str[i];
		}
	}
	printf("%s\n",temp);



}

void main()
{
	char arr[50]="Ankitha is a good girl";
	int len = strlen(arr);
	sep_word(arr,len);
}
