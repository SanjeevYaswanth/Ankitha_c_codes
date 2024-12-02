#include <stdio.h>
void main()
{
	int x = 0xff112233;
	int mask_bit = 0x80000000;
	if(x  & mask_bit)
	{
		x&= ~ (mask_bit);
		printf("after clearing msb bit: 0x%x\n",x);
	
	}
	else
	{
		printf("msb bit is not set \n");
	}



}
