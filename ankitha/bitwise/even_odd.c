#include <stdio.h>
void main()
{
	int x;
	printf("Enter the input: ");
	scanf("%d",&x);
	if(x & (x -1) == x-1)
	{
		printf("%d is odd number\n",x);
	}
	else
	{
		printf("%d is even number\n",x);
	}
}
