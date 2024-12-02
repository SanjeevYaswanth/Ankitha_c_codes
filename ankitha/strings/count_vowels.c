#include <stdio.h>
#include <string.h>
int count_vowels(char *arr, int len);

void main()
{
	char arr[100]="ankitha is a good girl";
	int len = strlen(arr);
	int res = count_vowels(arr,len);
	printf("%d\n",res);
}
int count_vowels(char *arr, int len)
{
	int i,count;
	for(i=0;arr[i]!='\0';i++)
	{
		if(arr[i]=='a' || arr[i]=='o' ||arr[i]=='u' ||arr[i]=='i' ||arr[i]=='e' ||arr[i]=='A' ||arr[i]=='U' ||arr[i]=='O' ||arr[i]=='I' ||arr[i]=='E')
		{
			count++;
		}
	}

	return count;


}
