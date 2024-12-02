#include <stdio.h>
void main()
{
	int x;
	printf("Enter the input: ");
	scanf("%d",&x);
	if(x & (x -1) != 0)
	{
		printf("%d is not power of 2\n",x);
	}
	else
	{
		printf("%d is power of 2\n",x);
	}
}
