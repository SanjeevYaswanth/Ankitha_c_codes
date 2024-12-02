#include <stdio.h>
void main()
{
	int num =5;
	int rem,bin_dec=0,base=1;
	while(num > 0 )
	{
		rem = num %2;
		bin_dec = bin_dec + rem  * base;
		num = num/2;
		base = base * 10;
	}
	printf("%d\n",bin_dec);
}
