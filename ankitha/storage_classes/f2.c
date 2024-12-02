#include <stdio.h>

extern int *ptr;

void fun()
{
	printf("%d\n",*ptr);
	*ptr = 20;
	printf("modified vlaue: %d\n",*ptr);
}
