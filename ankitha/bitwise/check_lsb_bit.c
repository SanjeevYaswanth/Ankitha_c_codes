#include <stdio.h>
void main()
{
	int x = 0xffffff21;
	int mask_bit = 0x00000001;
	if(x & mask_bit)
	{
		x&= ~mask_bit;
		printf("lsb bit is set after clearing: 0x%x\n",x);
	}
	else
	{
		printf("lsb bit not set\n");
	}
}
