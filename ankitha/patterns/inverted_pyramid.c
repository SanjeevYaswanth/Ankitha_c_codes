#include <stdio.h>

void main()
{
	int n;
	printf("Enter the ranges: ");
	scanf("%d",&n);
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(j=n-1;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}
