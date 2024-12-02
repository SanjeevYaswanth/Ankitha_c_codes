#include <stdio.h>

void main()
{
	int x=1,y=2,z=3;
	int *arr[3] = {&x, &y, &z};
	printf("sizeof array: %ld\n",sizeof(arr));
       printf("%d %d %d\n",*arr[0],*arr[1],*arr[2]);	



}
