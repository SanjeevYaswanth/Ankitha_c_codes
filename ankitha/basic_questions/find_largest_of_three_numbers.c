#include <stdio.h>
void main()
{
	int n1=40,n2=20,n3=30;
	if(n1 >= n2 && n1 >= n3)
	{
		printf("Largest num : %d\n",n1);
	}
	else if(n2 >= n1 && n2 >=n3 )
	{
		printf("Largest number: %d\n",n2);
	}
	else
	{
		printf("Largest number: %d\n",n3);
	}
}
