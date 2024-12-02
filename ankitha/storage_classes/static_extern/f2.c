#include <stdio.h>

static int count = 2;

int increment()
{
	count++;
}

int get_value()
{
	printf("Count: %d\n",count);
}
