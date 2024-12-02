#include <stdio.h>
void main()
{
	int x = 0x12;
	printf("x value before: 0x%x\n",x);
	int y;
	y = ((x & 0x0f) << 4)|((x & 0xf0) >> 4);
	printf("y value after nibble swap: 0x%x\n",y);



}
