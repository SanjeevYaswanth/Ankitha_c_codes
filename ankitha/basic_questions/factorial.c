#include <stdio.h>

int fact(int n)
{
	int i,res = 1;
	for(i =1; i<=n ;i++)
	{
		res = res * i;
	}
	printf("%d\n",res);
}


void main()
{
	int x = 5;
	fact(x);
}
