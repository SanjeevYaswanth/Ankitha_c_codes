#include <stdio.h>

void main()
{
	int x =0x1;
	if((char )x &1)
	{
		printf("Little\n");
	}
	else
	{
		printf("Big\n");
	}
}
