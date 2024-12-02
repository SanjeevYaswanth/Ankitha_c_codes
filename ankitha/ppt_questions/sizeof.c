#include<stdio.h>

#define SIZEOF(X) ((char*)(&X+1) - (char*)(&X))

void main()
{
	char x ='a';
	printf("size: %ld\n",SIZEOF(x));
}

