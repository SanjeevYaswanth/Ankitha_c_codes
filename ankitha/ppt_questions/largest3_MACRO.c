#include <stdio.h>

#define MAX(a,b,c) (a>b && a>c)?a:(b>c)?b:c

int main()
{
	int x=1,y=2,z=3;
	printf("%d\n",MAX(x,y,z));
}
