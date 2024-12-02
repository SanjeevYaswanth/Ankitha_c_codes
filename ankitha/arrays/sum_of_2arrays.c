#include <stdio.h>

void main()
{
	int arr[6]={1,2,3,4,5,6};
	int arr1[6] ={1,2,3,4,5,6};
	int i;
	int res[100];
	for(i=0;i<6;i++)
	{
		res[i] = arr[i]+arr1[i];
	}
	for(i=0;i<6;i++)
	{
		printf("i value: %d \t sum value:%d\n",i,res[i]);
	}

}
