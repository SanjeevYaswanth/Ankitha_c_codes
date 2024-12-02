#include <stdio.h>

void main()
{
	char x[2];
	if(&x[1] - &x[2] < 0)
	{
		printf("Down Stack\n");
	}
	else
	{
		printf("Upwards\n");	
	}
}
