#include <stdio.h>
#include <string.h>

void seperate_indivuals(char *arr)
{
	int i=0;
	while(arr[i]!='\0')
	{
		printf("%c ",arr[i]);
		i++;
	}
	printf("\n");
}



void main()
{
	char arr[50]="Ankitha.com";
	seperate_indivuals(arr);
}
