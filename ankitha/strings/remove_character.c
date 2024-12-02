#include <stdio.h>
#include <string.h>



void main()
{
	char str[100];
	char a;
	printf("Enter the string: ");
	scanf("%[^\n]s",str);
	printf("Enter the character: ");
	scanf(" %c",&a);
	int len = strlen(str);
	int i,k;
	for(i=0;i<len;i++)
	{
		if(str[i] == a)
		{
			for(k=i;k<len;k++)
			{
				str[k]=str[k+1];
			}
			len--;
			i--;
		}
	}
	printf("%s\n",str);

}
