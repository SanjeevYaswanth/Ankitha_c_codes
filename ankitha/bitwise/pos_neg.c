#include <stdio.h>
void main()
{
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	if(((x >> 31) & 1)==0)
	{
		printf("%d is positive number\n",x);
	}
	else
	{
		printf("%d is negative number\n",x);
	}
}
