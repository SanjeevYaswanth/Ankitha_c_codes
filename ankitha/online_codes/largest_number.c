// i/p: 12745
// o/p: 75421


#include <stdio.h>

void main()
{
	int num = 781239;
	int digit,large=0,temp;
	temp =num;
	int i;
	for(i=9;i>=0;i--)
	{
		temp = num;
		while(temp>0)
		{
			digit = temp % 10;
			if(digit  == i)
			{
				large = large * 10 + digit;
			}
			temp = temp /10;
		}
	}
	printf("%d\n",large);

}
