#include <stdio.h>
void main()
{
	int x = 6;
	int rev_bit = 0;
	while(x > 0)
	{
		rev_bit = rev_bit << 1;
		if(x & 1 == 1)
		{
			rev_bit = rev_bit ^ 1;
		
		}
		
		x = x >> 1;
	}
	printf("%d\n",rev_bit);
}
