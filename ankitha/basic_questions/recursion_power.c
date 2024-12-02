#include <stdio.h>


int power(int x, int y)
{
	if(y==0)
	{
		return 1;
	}

	return power(x,y-1)*x;

}


void main()
{
	int a=4,b=5;
	int res = power(a,b);
	printf("%d\n",res);

}
