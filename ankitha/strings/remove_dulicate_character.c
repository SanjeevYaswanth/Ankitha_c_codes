#include <stdio.h>
#include <string.h>

char rem_dup_char(char *str,int len)
{
	int i,j,k;
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str[i] == str[j])
			{
				for(k=j;k<len;k++)
				{
					str[k] = str[k+1];
				}
				j--;
				len--;
				str[len-1]='\0';
			}
		}
	}
	printf("%s\n",str);

}


int main()
{
	char str[]="hello world hello";
	int len = strlen(str);
	rem_dup_char(str,len);
}
