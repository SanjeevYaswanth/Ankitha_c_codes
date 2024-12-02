#include <stdio.h>
void main()
{
	int num = 1101;
	int rem,bin_dec=0,base=1;
	while(num !=0)
	{
		rem = num%10;
		bin_dec = bin_dec + rem *base;
		num = num/10;
		base = base *2;
	}
	printf("%d\n",bin_dec);


}
