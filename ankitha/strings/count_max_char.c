#include <stdio.h>
#include <string.h>

void count_repeted_char(char *arr, int len)
{
	int i,j,count=0;
	for(i=0;arr[i]!='\0';i++)
	{
		for(j=i+1; arr[j]!='\0';j++)
		{
			if(arr[i] == arr[j])
			{
				count++;
			
			}
		
		}	
	}
	printf("%d\n",count);
}




void main()
{
	char arr[50]="ankitha Ammulu";
	int len = strlen(arr);
	count_repeted_char(arr,len);
}
