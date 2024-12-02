#include <stdio.h>

void main()
{
	int n;
	printf("Enter the range: ");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<=n;i++)
	{
		for(j=i+1;j<=n;j++) // j prints *(stars) till j <=n
		{
			printf("* ");
		}
		printf("\n");
	}

}
