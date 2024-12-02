#include <stdio.h>
void main()
{
	int x = 0x12345678;
	printf("before : 0x%x\n",x);
	int y;
	y = (((x & 0x000000ff) << 24) | ((x & 0x0000ff00) << 8) | ((x & 0x00ff0000) >> 8) | ((x & 0xff000000) >> 24));
	printf("after  : 0x%x\n",y);
}
