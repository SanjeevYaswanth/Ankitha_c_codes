#include <stdio.h>
void main()
{
	int x = 5,i;
	int one = 0, zero = 0;
	for(i =0 ;i <=31 ;i++)
	{
	while (x > 0)
	{
		if(x &1)
		{
			one++;
		}
		else
		{
			zero++;
		}
	x = x >>1;
	}
	}
	printf("ones: %d zeroes: %d\n",one,zero);
}
