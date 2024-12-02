#include <stdio.h>

void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int count =0;
	while(n>0)
	{
		count++;
		n&=n-1;
	}
	printf("Count: %d\n",count);

}
