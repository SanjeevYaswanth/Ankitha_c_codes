#include <stdio.h>
void main()
{
	int x;
	printf("Enter the number: ");
	scanf("%d",&x);
	if(x < 0)
	{
		printf("Entered the number is negative: %d\n",x);
	}
	else if(x > 0)
	{
		printf("Entered number is positive: %d\n",x);
	}
	else
	{
		printf("Entered number is zero: %d\n",x);
	}
}
