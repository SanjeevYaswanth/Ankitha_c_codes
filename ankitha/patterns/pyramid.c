#include <stdio.h>

void main()
{
	int n;
	printf("Enter the range: ");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}

		for(j=1;j< 2 * i;j++)
		{
			printf("*");
		}
		printf("\n");
	}

}
