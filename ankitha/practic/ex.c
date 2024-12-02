#include <stdio.h>

void main()
{
	auto int x;
	register int y;
	static int z;
	auto int a =10;
	register int b =20;
	static int c =30;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%d\n",z);
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);

}
